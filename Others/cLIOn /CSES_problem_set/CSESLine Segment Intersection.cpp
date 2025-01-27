//
// Created by Harsh Anand on 10/11/2023.
//
#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#else
#define debug(x)
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

void solve(void ) {

     vector<double> v(8);
     for(int i=0; i<8;++i){
          cin >> v[i];
     }

     double slope =abs (((v[3] - v[1])) / ((v[2] - v[0]))+0.000001);
     double m = abs(((v[7] - v[5]) ) / (v[6] - v[5])+0.000001);
     debug(slope);
     debug(m)
     slope == m ? no : yes;

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

          solve();

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