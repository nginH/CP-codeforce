//
//  B. 250 Thousand Tons of TNT.cpp
//  CODEFORCE's
//
//  Created by Harsh Anand on 20/11/2023.
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
#define  max(a,b) a>b?a:b;
#define  min(a,b) a<b?a:b;

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

     uint32_t n;
     cin>>n;
     long long int arr[n];
     int64_t m=INT_MIN,k=INT_MAX;
     for (int i=0; i<n; ++i) {
          cin>>arr[i];
         k = min(k, arr[i]);
         m = max(m, arr[i]);
     }

     debug(k,m)
     cout<<m+k<<"\n";




     return;
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












     // To: MoM & DaD
     // One day.. i'll make you proud;





