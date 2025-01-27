     //
     //  Dynamic Range Minimum Queries.cpp
     //  Dynamic programming
     //
     //  Created by Harsh Anand on 17/03/2024.
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
freopen("/Users/harshanand/Desktop/desktop/C++ file/Dynamic programming/Dynamic programming/input.txt", "r", stdin)  ;\
freopen("/Users/harshanand/Desktop/desktop/C++ file/Dynamic programming/Dynamic programming/output.txt", "w", stdout);\
freopen("/Users/harshanand/Desktop/desktop/C++ file/Dynamic programming/Dynamic programming/error.txt", "w", stderr) ; \
auto start = high_resolution_clock::now();

#define Time auto end = high_resolution_clock::now();\
std::chrono::duration<double> time=(end - start);\
milliseconds d = std::chrono::duration_cast<std::chrono::milliseconds>(time);\
cerr<<"\n"<<d.count()<<"ms\n";

#else
#define inout;
#define Time;
#define dbg(...)
#define debug_2(x,y) cerr << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";

#endif

#define setIO                        \
ios_base::sync_with_stdio(false); \
cin.tie(nullptr);                 \
cout.tie(nullptr);


#define code by Harsh Anand
#define inf 2147483647
#define Pi acos(-1.0)
#define no           cout<<"NO\n"
#define yes          cout<<"YES\n"
#define br           cout<< "\n"; //yey html
template <typename T> void rd(T& a) {  cin >> a; }
template <typename T, typename... Args> void rd(T& a, Args&... args) { cin >> a;rd(args...);}
template <typename T> bool cmin(T& a, T b) { return b < a ? (a = b, true) : false; }
template <typename T> bool cmax(T& a, T b) { return b > a ? (a = b, true) : false; }


vector<long long int> bit(10);

long long int minrange(long long int idx) {
     long long int ans = INT_MAX;
     for (; idx > 0; idx -= idx & (-idx)) {
          ans =min(ans, bit[idx]);
     }
     return ans;
}
long long int minrange(long long int l, long long int r) {
     return min(minrange(r) , minrange(l));
}

void update(long long int data, long long int idx) {
     for (; idx <= bit.size(); idx += idx & (-idx)) {
          bit[idx] =min(bit[idx], data);
     }
}

// ques
/*
 write a c++ program create a class calculator capable of finding sqar  cube , sqrt addition subtraction , multi , division , of two number create
 seprate fxn for each of opperator.
use geter ans setter for accessing the variable 
 */

void solve() {

     bit.assign(10, inf);
     long long int a, b;
     rd(a,b);
     vector<long long int> v(a+1);
     v.assign(a+1, inf);

     for (long long int i = 1; i <= a; ++i) {
          long long int a;
          rd(a);
          v[i]=a;
          update(a, i);
     }

     while (b--) {
          long long int p, m, n;
          rd(p,m,n);
          if (p == 1) {
               update  (n, m);
               v[m]=n;
          }
          if (p == 2) {
               cout << minrange(m, n) << "\n";
          }
     }
     dbg(v);
     dbg(bit);
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
