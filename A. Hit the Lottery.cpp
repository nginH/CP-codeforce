//
//  A. Hit the Lottery.cpp
//  CODEFORCE's
//
//  Created by Harsh Anand on 06/03/2024.
//
//
//  main.cpp
//  CSES sum of two value
//
//  Created by Harsh Anand on 04/03/2024.
//

#include <algorithm>
#include <climits>
#include <vector>
#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

#ifndef ONLINE_JUDGE
#include <bits/debug.h>
#define inout                                                                  \
freopen("/Users/harshanand/Desktop/desktop/C++ file/CODEFORCE's/CODEFORCE's/file/input.txt", "r",        \
stdin);                                                              \
freopen("/Users/harshanand/Desktop/desktop/C++ file/CODEFORCE's/CODEFORCE's/file/output.txt", "w",        \
stdout);                                                             \
freopen("/Users/harshanand/Desktop/desktop/C++ file/CODEFORCE's/CODEFORCE's/error.txt", "w",         \
stderr);                                                             \
auto start = high_resolution_clock::now();

#define Time                                                                   \
auto end = high_resolution_clock::now();                                     \
std::chrono::duration<double> time = (end - start);                          \
milliseconds d =                                                             \
std::chrono::duration_cast<std::chrono::milliseconds>(time);             \
cerr << "\n" << d.count() << "ms\n";

#else
#define inout ;
#define Time ;
#define dbg(...)
#define debug_2(x, y)                                                          \
cerr << #x << " = " << x << " " << #y << " = " << y << "\n";

#endif

#define setIO                                                                  \
ios_base::sync_with_stdio(false);                                            \
cin.tie(nullptr);                                                            \
cout.tie(nullptr);

#define code by Harsh Anand
#define Inf 2147483647
#define Pi acos(-1.0)
#define no cout << "NO\n"
#define yes cout << "YES\n"
#define br cout << "\n"; // yey html
template <typename T> void rd(T &a) { cin >> a; }
template <typename T, typename... Args> void rd(T &a, Args &...args) {
     cin >> a;
     rd(args...);
}
template <typename T> bool cmin(T &a, T b) {
     return b < a ? (a = b, true) : false;
}
template <typename T> bool cmax(T &a, T b) {
     return b > a ? (a = b, true) : false;
}

string btos(string se) {
     string s = bitset<32>(se).to_string();
     return s;
}

uint64_t s_to_d(string st) {
     uint64_t number;
     number = strtoull(st.c_str(), NULL, 2);
     return number;
}

void String_match(string s, string match) {
     for (int i = 0; i <= s.size() - match.size(); ++i) {
          int j = 0;
          for (j = 0; j < match.size(); ++j) {
               if (match[j] != s[i + j]) {
                    break;
               }
          }
          if (j == match.size()) {
               cout << "match found at index : " << i << "\n";
          }
     }
}

#define min(a,b) a<b?a:b
#define max(a,b) a>b?a:b
long long int solve(vector<int> &v, long long int x , vector<long long int> &dp) {

     if (x == 0) {
          return 0;
     }
     if (x < 0) {
          return INT_MAX;
     }

     //memoization
     if (dp[x]!=INT_MAX) {
          return dp[x];
     }


     long long int mini = INT_MAX;
     for (int i = 0; i < v.size(); ++i) {
         long long int  ans = solve(v, x - v[i],dp);
          if (ans != INT_MAX) {
               dp[x] = min(mini, ans+1);
          }
     }

     return dp[x];
}

int main() {
     setIO;
     inout;

     int testcase = 1;
          //           rd(testcase);
     while (testcase--) {
          int x;
          rd(x);
          vector<int> v(5);
          //space optimization
          int ans = x/100;
          vector<long long int>dp(x%100+1,INT_MAX);
          v[0] = 1;
          v[1] = 5;
          v[2] = 10;
          v[3] = 20;
          v[4] = 100;
          cout << ans+solve(v, x%100,dp);
     }

     Time;
     return 0;
}

/*      THE END */
