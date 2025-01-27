//
// Created by Harsh Anand on 08/11/2023.
//
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define code by Harsh Anand

#define Inf 2147483647
#define Pi acos(-1.0)

#define pb(x) push_back(x)

#define sc(x)        cin>>x;
#define pt(x)        cout<<x<<"\n";
#define debug(x)     cout << #x << " = "<< x << "\n";
#define debug_2(x, y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no           cout<<"NO\n"
#define yes          cout<<"YES\n"
#define br           cout<< "\n"; //yey html

#define print_range(vectorr)    for(auto res:vectorr){ cout<<res<<" ";}
#define print_range_map(mapp)   for(auto x:mapp){ cout<<x.first<<"  "<< x.second<<"\n";}

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
          int j;
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

void solve(int a, int b );
void solve(int a, int b) {
     vector<pair<int, int>> sum;
     sum.reserve(1000000);

     int x = 0, y = 0;
     int j=a;
     sum.push_back(make_pair(x, y));
     while (a--) {
          cin >> x;
          y += x;
          sum.push_back(make_pair(x, y));
     }

     while (b--) {
          int m, b, k;
          cin >> m >> b >> k;
          if (m==1){
               sum[b].second= (sum[b].second-sum[b].first) +k;
               sum[b].first=k;{
                    for (int i = 1; i <=j-b; ++i) {
                         sum[b + i].second = sum[b + i-1].second + sum[b+i].first;

                    }
               }
          }else if(m==2){
               cout<<sum[k].second-sum[b-1].second;
               br
          }


     }
     return;
}

int main() {

#ifndef ONLINE_JUDGE
//     freopen("/Users/harshanand/Library/Application Support/JetBrains/CLion2023.2/scratches/input.txt", "r", stdin);
//     freopen("/Users/harshanand/Library/Application Support/JetBrains/CLion2023.2/scratches/output.txt", "w", stdout);
     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     int a, b;
     cin >> a;
     cin >> b;

     solve(a, b);

#ifndef ONLINE_JUDGE
     auto end = high_resolution_clock::now();
     std::chrono::duration<double> time = (end - start);
     milliseconds d = std::chrono::duration_cast<std::chrono::milliseconds>(time);
//     cout << "\n" << d.count() << "ms\n";
#endif
     return 0;
}












// To: MoM & DaD
// One day.. i'll make you proud;

