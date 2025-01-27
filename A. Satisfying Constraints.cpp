//
//  A. Satisfying Constraints.cpp
//  CODEFORCE's
//
//  Created by Harsh Anand on 26/01/2024.
//
//
//  C. Sending Messages.cpp
//  CODEFORCE's
//
//  Created by Harsh Anand on 25/01/2024.
//

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

#ifndef ONLINE_JUDGE
#include <bits/debug.h>
#define inout  freopen("/Users/harshanand/Desktop/C++ file/CODEFORCE's/CODEFORCE's/file/input.txt", "r", stdin) ; freopen("/Users/harshanand/Desktop/C++ file/CODEFORCE's/CODEFORCE's/file/output.txt", "w", stdout); freopen("/Users/harshanand/Desktop/C++ file/CODEFORCE's/CODEFORCE's/error.txt", "w", stderr) ; \
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


void solve(void){
     int x;
     rd(x);

     vector<int64_t>v1;
     v1.reserve(100);
     vector<int64_t>v2;
     v2.reserve(100);
     vector<int64_t>v3;
     v3.reserve(100);

     for (int64_t i=0; i<x; i++) {
          int64_t y;
          rd(y);
          if (y==1) {
               int64_t ck;
               rd(ck);
               v1.push_back(ck);
          }
          if (y==2) {
               int64_t ck;
               rd(ck);
               v2.push_back(ck);
          }
          if (y==3) {
               int64_t ck;
               rd(ck);
               v3.push_back(ck);
          }
     }

     int64_t Mx=INT_MIN,mi=INT_MAX;
     for (auto x : v1) {
          mi=min(x,mi);
     }
     for (int64_t x : v2) {
          Mx=max(Mx, x);
     }

     int64_t res=Mx-mi;
     res++;
     dbg(Mx,mi,res);

     dbg(v1);
     dbg(v2);
     dbg(v3);
     for (int64_t y : v3) {
          if (y>=mi && y<=Mx) {
               res--;
          }
     }

     cout<<res<<"\n";

}


int main(){
     setIO;
     inout;

     int testcase=1;
     rd(testcase);
     while (testcase--) {
          solve();
     }

     Time;
     return 0;
}












