//
//  main.cpp
//  CSES sum of two value
//
//  Created by Harsh Anand on 04/03/2024.
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
freopen("/Users/harshanand/Downloads/test_input-8.txt", "r", stdin)  ;\
freopen("/Users/harshanand/Desktop/C++ file/CSES sum of two value/CSES sum of two value/output.txt", "w", stdout);\
freopen("/Users/harshanand/Desktop/C++ file/CSES sum of two value/CSES sum of two value/error.txt", "w", stderr) ; \
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

#define k "IMPOSSIBLE"
void solve(void){
     long long int a,b;
     rd(a,b);
     vector<long long int> v(a);
     vector<long long int > so(a);
     for (int i=0; i<a; ++i) {
          cin>>v[i];
          so[i]=v[i];
     }


     sort(v.begin(), v.end());
/*brute force*/
//     for (int i=0; i<a-1; i++) {
//          for (int j=i+1; j<a; ++j) {
//               if (v[i]+v[j]==b) {
//                    cout<<i+1<<" "<<j+1<<"\n";
//                    return;
//               }
//          }
//     }
     long long int i=0;
    long long int j=v.size()-1;
     vector<long long int>ans;
     ans.reserve(3);

     while (i<v.size()-1|| j<=1 or abs(i-j) >1) {
          if (v[i]+v[j]==b) {
               ans.push_back(v[i]);
               ans.push_back(v[j]);
               break;          }
          if (v[i]+v[j]>b) {
               i++;
               j=v.size()-1;
          }else{
               j--;
          }
     }
     int count=0;
     vector<int >fin;
     fin.reserve(2);

     dbg(so);
     dbg(ans);
     for (int i=0; i<so.size() and count<=2; ++i) {
          if (so[i]==ans[0] || so[i]==ans[1]) {
               fin.push_back(i+1);
               count++;
          }
     }
     dbg(count);
     if (count==2) {
          for (int x : fin) {
               cout<<x<<" ";
          }
          return;
     }
          printf(k);





     return;
}


int main(){
     setIO;
     inout;

     int testcase=1;
//           rd(testcase);
     while (testcase--) {
          solve();
     }

     Time;
     return 0;
}











/*      THE END */
