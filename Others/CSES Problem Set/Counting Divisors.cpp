//
//  Counting Divisors.cpp
//  CSES Problem Set
//
//  Created by Harsh Anand on 05/03/2024.
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
freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Set/input.txt", "r", stdin)  ;\
freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Set/output.txt", "w", stdout);\
freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Set/error.txt", "w", stderr) ; \
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

void solve() {
     int n;
     rd(n);
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
//          debug_2(x.first, x.second)
          ans *= x.second + 1;
     }
     if(ans==1){
          ans+=1;
     }
     cout << ans << "\n";
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
#include <stdio.h>
int main(void){
     while (true) {
          printf("randi madharchod \n");
     }
     return 0;
}
