//
//  Find Duplicates In Array.cpp
//  CODEFORCE's
//
//  Created by Harsh Anand on 21/01/2024.
//

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

#ifndef ONLINE_JUDGE
#include <bits/debug.h>
#define inout  \
freopen("/Users/harshanand/Desktop/C++ file/CODEFORCE's/CODEFORCE's/file/input.txt", "r", stdin)  ;\
freopen("/Users/harshanand/Desktop/C++ file/CODEFORCE's/CODEFORCE's/file/output.txt", "w", stdout);\
freopen("/Users/harshanand/Desktop/C++ file/CODEFORCE's/CODEFORCE's/error.txt", "w", stderr) ; \
auto start = high_resolution_clock::now();

#define Time auto end = high_resolution_clock::now();\
std::chrono::duration<double> time=(end - start);\
milliseconds d = std::chrono::duration_cast<std::chrono::milliseconds>(time);\
cerr<<"\n"<<d.count()<<"ms\n";

#else
#define inout;
#define Time;
#define debug(...)
#define debug_2(x,y) cerr << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";

#endif

#define setIO                        \
ios_base::sync_with_stdio(false); \
cin.tie(nullptr);                 \
cout.tie(nullptr);


#define code by Harsh Anand
#define Inf 2147483647
#define Pi acos(-1.0)
#define no           cout<<"NO\n"
#define yes          cout<<"YES\n"
#define br           cout<< "\n"; //yey html
template <typename T> void rd(T& a) {  cin >> a; }
template <typename T, typename... Args> void rd(T& a, Args&... args) { cin >> a;rd(args...);}
template <typename T> bool cmin(T& a, T b) { return b < a ? (a = b, true) : false; }
template <typename T> bool cmax(T& a, T b) { return b > a ? (a = b, true) : false; }

string btos( string se){
     string s= bitset<32> (se).to_string();
     return s;
}

uint64_t s_to_d( string st){
     uint64_t number;
     number = strtoull(st.c_str (),NULL,2);
     return number;
}

void String_match(string s, string match){
     for (int i=0; i<=s.size()-match.size(); ++i) {
          int j=0;
          for ( j=0; j<match.size(); ++j) {
               if (match[j]!=s[i+j]) {
                    break;
               }
          }
          if (j==match.size()) {
               cout<<"match found at index : "<< i<<"\n";
          }
     }
}

/*
 Time Complexity: O(N)
 Space Complexity: O(1)

 Where N is the size of the array.
 */
vector < int > findDuplicates(vector < int > & arr, int n) {
     vector < int > ans;

          // Incrementing all the values by n.
     for ( int i=0; i<n; ++i) {
          int index=(arr[i]-1)%n;

          if (arr[index]<0) {
               ans.push_back(arr[i]);
          }else{
               arr[index]= (arr[index]*-1);
          }
     }

     return ans;
}


vector<int> solve(void){
     int si;
     rd(si);
     vector<int> arr(si);
     for (int i=0; i<si; ++i) {
          cin>>arr[i];
     }
     vector < int > ans;
     int index=0;
          // Incrementing all the values by n.
     bool ck=true;
     for ( int i=0; i<si; ++i) {

           index=(abs(arr[i]));
         // dbg(index);
          if (arr[index]<0) {

               ans.push_back(abs(arr[i]));
               ck=false;
          }else{
              // dbg(index);
               arr[index]= (arr[index]*-1);
          }
//          dbg(arr[i], arr[index]);
          dbg(arr);
     }
     if (ck) {
          ans.push_back(-1);
     }
     return  ans;
//     vector<int> ans;
//     ans.reserve(10000);
//     int low=0, high=si-1;
//     bool ck=true;
//     bool one=true;
//     if (si==2) {
//          if (v[0]==v[1]) {
//               ans.push_back(v[0]);
//          }else{
//               ans.push_back(-1);
//          }
//          return ans;
//     }
//     while (low!=si-2) {
//          dbg( v[low], v[high]);
//          if (high==low) {
//               high=si-1;
//               one=true;
//               low++;
//          }
//          if (v[low]==v[high] and (v[low]!=-1 or v[high]!=-1)) {
//               ck=false;
//               if(one)ans.push_back(v[low]);
//               one=false;
//               v[low]=v[high]=-1;
//          }else{
//               high--;
//          }
//
//     }
//     if (ck) {
//          ans.push_back(-1);
//     }




}
double murge(int *arr, int *arr2, int n , int m){
     int ans[n+m];
     int i,j,k;
     i=j=k=0;
     while(i<n && j<m){
          if(arr[i]<=arr2[j]){
               ans[k++]=arr[i++];
          }else{
               ans[k++]= arr2[j++];
          }
     }

     for(; i<n;++i){
          ans[k++]=arr[i];
     }
     for(; j<m;++j){
          ans[k++]=arr2[j];
     }

     double xans=0;
     if(k&1){
               //od
           xans=ans[(k-1)/2 ];
     }else{
          double a= (double)ans[(k-1)/2];
          double a2= (double)ans[(k-1)/2 +1];
         xans=(double)(a+a2)/2;
     }
     return xans;
}


void cke(){
     int arr[]={1,3};
     int arr2[]={2};
    cout<<murge(arr, arr2, 2, 1);
}

int main(){
     setIO;
     inout;

     int testcase=1;
           rd(testcase);
     while (testcase--) {
          cke();
//        vector<int>ans=  solve();
//          for (auto x : ans) {
//               cout<<x<<" ";
//          }
          br;
     }

     Time;
     return 0;
}











/*      THE END */
