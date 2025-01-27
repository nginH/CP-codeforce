//
// Dynamic Range Sum Queries

#include <algorithm>
//#include <bits/debug.h>
#include <bits/stdc++.h>
#include <fstream>
#include <vector>
using namespace std;

vector<long long int> bit(200001);

long long int sum(long long int idx) {
  long long int ans = 0;
  for (; idx > 0; idx -= idx & (-idx)) {
    ans += bit[idx];
  }
  return ans;
}
long long int sum(long long int l, long long int r) { return sum(r) - sum(l - 1); }

void update(long long int data, long long int idx) {
  for (; idx <= bit.size(); idx += idx & (-idx)) {
    bit[idx] += data;
  }
}

void solve() {
  long long int a, b;
  cin >> a >> b;
  vector<long long int> v(a+1);

  for (long long int i = 1; i <= a; ++i) {
    long long int a;
    cin >> a;
       v[i]=a;
    update(a, i);
  }

  while (b--) {
    long long int p, m, n;
    cin >> p >> m >> n;

    if (p == 1) {
      update(n - v[m], m);
         v[m]=n;
    }
    if (p == 2) {
      cout << sum(m, n) << "\n";
    }
  }
}

 int main() {

//  freopen("/Users/harshanand/Desktop/desktop/C++ file/Dynamic "
//          "programming/Dynamic programming/input.txt",
//          "r", stdin);
//  freopen("/Users/harshanand/Desktop/desktop/C++ file/Dynamic "
//          "programming/Dynamic programming/output.txt",
//          "w", stdout);
//  freopen("/Users/harshanand/Desktop/desktop/C++ file/Dynamic "
//          "programming/Dynamic programming/error.txt",
//          "w", stderr);

     solve();
}
