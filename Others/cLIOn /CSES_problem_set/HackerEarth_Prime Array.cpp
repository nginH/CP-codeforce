// created by harsh Anand on 9th nov

#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#else
#define debug(....);
#endif
using namespace std;
using namespace chrono;

#define code by Harsh Anand
#define Inf 2147483647
#define Pi acos(-1.0)
#define pb(x) push_back(x)

#define debug_2(x, y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no           cout<<"NO\n"
#define yes          cout<<"YES\n"
#define br           cout<< "\n"; //yey html

string b_to_s(string se) {
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

vector<bool> segmentedSieve(long long L, long long R) {
     long long lim = sqrt(R);
     vector<char> mark(lim + 1, false);
     vector<long long> primes;
     for (long long i = 2; i <= lim; ++i) {
          if (!mark[i]) {
               primes.emplace_back(i);
               for (long long j = i * i; j <= lim; j += i)
                    mark[j] = true;
          }
     }

     vector<bool> isPrime(R - L + 1, true);
     for (long long i : primes)
          for (long long j = max(i * i, (L + i - 1) / i * i); j <= R; j += i)
               isPrime[j - L] = false;
     if (L == 1)
          isPrime[0] = false;
     return isPrime;
}

// driving code
void solve(int a) {

     vector<int> v;
     v.reserve(a);
     v.size();
     int one = 0;
     int mx = 0, mi = INT_MAX;
     int y = 0;
     for (int i = 0; i < a; ++i) {
          int k;
          cin >> k;
          if (k == 1) {
               one++;
          }
          if (k > 2 && k % 2 == 0) {
               continue;
          } else {
               v.push_back(k);
               mx = max(mx, v[y++]);
               mi = min(mi, k);
          }

     }
     std::sort(v.begin(), v.end());
     vector<bool> ans = segmentedSieve(mi, mx);

     vector<int> k;
     for (int i = 0; i < v.size(); ++i) {
          if (ans[v[i] - mi]) {
               k.push_back(v[i]);
          }
     }

     int ans0;
     int i;
     for (i = 0; i < k.size() && i < one/2; ++i) {
     }
     cout<<i;

     br;

     debug(ans)
     debug(k);
     debug(v)

}

int main() {

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Library/Application Support/JetBrains/CLion2023.2/scratches/input.txt", "r", stdin);
     freopen("/Users/harshanand/Library/Application Support/JetBrains/CLion2023.2/scratches/output.txt", "w", stdout);
     freopen("/Users/harshanand/Library/Application Support/JetBrains/CLion2023.2/scratches/error.txt", "w", stderr);
     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     int test;
     cin >> test;
     while (test--) {
          int a;
          cin >> a;
          solve(a);

     }

#ifndef ONLINE_JUDGE
     auto end = high_resolution_clock::now();
     std::chrono::duration<double> time = (end - start);
     milliseconds d = std::chrono::duration_cast<std::chrono::milliseconds>(time);
     cerr << "\n" << d.count() << "ms\n";
#endif
     return 0;
}












// To: MoM & DaD
// One day.. i'll make you proud;