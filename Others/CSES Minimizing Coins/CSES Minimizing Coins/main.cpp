//

//  main.cpp
//  CSES Minimizing Coins
//
//  Created by Harsh Anand on 07/03/2024.
//

/* solving via memoization*/

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

#ifndef ONLINE_JUDGE
#include <bits/debug.h>
#define inout                                                                  \
  freopen("/Users/harshanand/Desktop/desktop/C++ file/CODEFORCE's/CSES "       \
          "Minimizing Coins/CSES Minimizing Coins/input.txt",                  \
          "r", stdin);                                                         \
  freopen("/Users/harshanand/Desktop/desktop/C++ file/CODEFORCE's/CSES "       \
          "Minimizing Coins/CSES Minimizing Coins/output.txt",                 \
          "w", stdout);                                                        \
  freopen("/Users/harshanand/Desktop/desktop/C++ file/CODEFORCE's/CSES "       \
          "Minimizing Coins/CSES Minimizing Coins/error.txt",                  \
          "w", stderr);                                                        \
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
#define debug(...)
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

#define min(a, b) a < b ? a : b;

int solve(vector<int> &v, int tar) {
  vector<int> dp(tar + 1, INT_MAX);
  dp[0] = 0;
  if (tar == 0) {
    return 0;
  }
  if (tar < 0) {
    return INT_MAX;
  }
  for (int i = 1; i <= tar; ++i) {
    for (int j = 0; j < v.size(); ++j) {
      if (i - v[j] >= 0 and dp[i - v[j]] != INT_MAX) {
        dp[i] = min(dp[i], i + dp[i - v[j]]);
      }
    }
  }

  return dp[tar];
}

int solve2(vector<int> &v, int tar, vector<int> &dp) {

  if (tar == 0) {
    return 0;
  }
  if (tar < 0) {
    return INT_MAX;
  }

  if (dp[tar] != INT_MAX) {
    return dp[tar];
  }
  int mini = INT_MAX;
  for (int j = 0; j < v.size(); ++j) {
    int ans = solve2(v, tar - v[j], dp);
    if (ans != INT_MAX) {
      mini = min(mini, ans + 1);
    }
  }
  dp[tar] = mini;

  return dp[tar];
}

int main() {
  setIO;
  inout;

  int testcase = 1;
  // rd(testcase);
  while (testcase--) {

    int a, tar;
    rd(a, tar);
    vector<int> v(a);
    for (int i = 0; i < a; ++i) {
      cin >> v[i];
    }

    vector<int> dp(tar + 1, INT_MAX);
    int ans = solve2(v, tar, dp);
    if (ans == INT_MAX) {
      cout << "-1";
    } else {
      cout << ans;
    }
  }

  Time;
  return 0;
}

/*      THE END */
