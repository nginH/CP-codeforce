//
//  murge sort.cpp
//  CODEFORCE's
//
//  Created by Harsh Anand on 04/12/2023.
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

void merge_sort(int *arr , int low , int mid, int high){



     int i, j,k;
     i=j=k=0;
     int res[100];


     while (i<mid && j<high) {
          if (arr[i]<arr[j]) {
               res[k++]=arr[i++];
          }else{
               res[k++]=arr[j++];
          }
     }

     debug(i,j,k);

     for (; i<mid; ++i) {
          res[k++]=arr[i];

     }

    for (; j<high; ++j) {
         res[k++]=arr[j];
     }

     debug(i, j,k)

     for (int i=0; i<k; i++) {
          arr[i]=res[i];
     }


     return;

}


void itrative_merge_sort(int *Arr, int len){
     int p, low,hight, mid,i;
     for (p=2; p<=len; p*=2) {
          for (i=0; i+p-1<=len; i=i+p) {
               low=i;
               hight= i+p-1;
               mid=(low+hight)/2;
               merge_sort(Arr, low, mid, hight);
          }
     }
     if (p/2<len) {
          merge_sort(Arr, 0, p/2-1, len-1);
     }
     for (int i=0; i<len; ++i) {
          cout<<Arr[i]<<" ";
     }

}






void solve(void){

/* first arry input*/
     int n;
     scanf("%d", &n);
     int arr[n];
     for (int i=0; i<n; ++i) {
          scanf("%d", &arr[i]);
     }
     itrative_merge_sort(arr, n);

     for (int i=0; i<n; ++i) {
          printf("%d ", arr[i]);
     }



     return;
}


int main(){
     setIO;
     inout;

     int testcase=1;
          // rd(testcase);
     while (testcase--) {
          solve();
     }

     Time;
     return 0;
}











/*      THE END */
