//
//  Two Sum.cpp
//  Dynamic programming
//
//  Created by Harsh Anand on 08/03/2024.
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

// hash map ..  bahut bakwas approch ... space ka maa ka bosda;;
void solve(){
     int x;
     rd(x);
     int mx=INT_MIN;
     vector<int>v(x);
     for (int i=0; i<x; ++i) {
          cin>>v[i];
          mx=max(v[i], mx);
     }
     bool *dp=(bool*)calloc(mx, sizeof(bool));
     memset(dp, 0, mx);

     for (auto y : v) {
          dp[y]=1;
     }
     int tar;
     rd(tar);
     int ans=0;

     vector<int> b;
     b.reserve(10);

     for (auto y : v) {
          ans=tar-y;
          b.push_back(y);
          if (dp[ans]) {
               b.push_back(ans);
               break;;
          }
          b.pop_back();
     }
     int l=0;
      x=0;
     vector<int>f;
     f.reserve(3);
     for (auto m : v) {
          if(b[1]==m|| b[0]==m){
               x++;
               f.push_back(l);
          }
          if(x==2){
               break;
          }
          l++;
     }
     return;

}
// optimal in the aproch

void solve2(){
     int x;
     rd(x);
     int tar;
     rd(tar);
     unordered_map<int , int>mp;
     mp.reserve(200000);
     vector<int >v(x);
     for (int i=0; i<x; ++i) {
          cin>>v[i];
          mp.insert({v[i], i});
     }
//     dbg(v);
     vector<int> ans2;
     ans2.reserve(10);
     bool fuck=false;
     for (int i=0; i<x; ++i) {
          int ans=tar- v[i];
          if(mp.find(ans)!=mp.end()){
               if(i==mp[ans]){
                    continue;
               }
               ans2.push_back(i+1);
               ans2.push_back(mp[ans]+1);
               fuck=true;
               break;
          }
     }
     if(fuck){
          for (auto x : ans2) {
               cout<<x<<" ";
          }
     }else{
          cout<<"IMPOSSIBLE";
     }
}




int main(){
     setIO;
     inout;

     int testcase=1;
          // rd(testcase);
     while (testcase--) {
          solve2();
     }

     Time;
     return 0;
}











/*      THE END */
