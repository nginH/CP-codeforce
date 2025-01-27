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
void solve(int n) {
     if (n <= 1) {
          cout << n << "\n";
          return;
     }
     int ans=1 ,i = 2;
     unordered_map<int, int> m;
     m.reserve(1000);
     int u = n / 2;

     bool check = true, check2= true;

     while (n != 1 && check  && i<=u) {
          if (n % i == 0) {
               m[i]++;
               n /= i;
               check2 = false;
          } else {
               i++;
          }
          if (i*i>=n && check2){
               check =false;
          }

     }

     for (auto x : m) {
          ans *= x.second + 1;
     }
     if(ans==1){
          ans+=1;
     }
     cout<<ans<<"\n";
     return;
}



void solve_attempt(int n){
     int sq = sqrt(n);
     unordered_map<int , int> m;
     while (n%2==0){
          m[2]++;
          n/=2;
     }
     for (int i =3; i <= sq; i+=2) {
          m[i]++;
          n /= i;
     }
     int ans=1;

     for (auto x : m) {
          debug_2(x.first, x.second)
          ans *= x.second + 1;
     }
     if(ans==1){
          ans+=1;
     }
     cout << ans << "\n";
}




int main() {

#ifndef ONLINE_JUDGE
//     freopen("/Users/harshanand/Library/Application Support/JetBrains/CLion2023.2/scratches/input.txt",  "r", stdin);
//     freopen("/Users/harshanand/Library/Application Support/JetBrains/CLion2023.2/scratches/output.txt", "w", stdout);
     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     int test;
     cin >> test;
     while (test--) {
          int a;
          cin >> a;
//          solve(a);

          solve_attempt(a);
     }

#ifndef ONLINE_JUDGE
     auto end = high_resolution_clock::now();
     std::chrono::duration<double> time = (end - start);
     milliseconds d = std::chrono::duration_cast<std::chrono::milliseconds>(time);
//     cout<<"\n"<<d.count()<<"ms\n";
#endif
     return 0;
}












// To: MoM & DaD
// One day  i'll make you proud;

