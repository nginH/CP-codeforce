//
//  SubSet sum problem.cpp
//  Dynamic programming
//
//  Created by Harsh Anand on 10/03/2024.
//


#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")

#include <bits/stdc++.h>
#include <iostream>

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
/*
 YES
 NO
 YES
 NO

 */

class employ {
     int id;
     string name;
     string address;
     void get_id(void){
          std::cout<<"enter a id";
          std::cin>>id;
     } 
     void get_name(void){
          std::cout<<"enter a name ";
          std::cin>>name;
     } void get_address(void){
          std::cout<<"enter a address ";
          std::cin>>address;
     }

};

int ans(int k, vector<int>&v, int *dp){

     if(k==0){
          return 0;
     }
     if (k<0) {
          return INT_MAX;
     }
     if(dp[k]!=INT_MAX){
          return dp[k];
     }

     for (int i=0; i<v.size(); ++i) {
          cerr<<i<<" ";
         dp[k]= ans(k-v[i], v, dp);
     }
     cerr <<"\n";
     return dp[k];

}


void solve(void){
     int n , k;
     rd(n,k);
     vector<int > v(n);
     for (int i=0; i<n; ++i) {
          cin>>v[i];
     }
     int dp[n+1];


     for (int i=0; i<v.size()+1; ++i) {
          dp[i]=INT_MAX;
     }

     if(ans(k,v,dp)==0){
          printf("YES\n");
     }else{
          printf("NO\n");
     }



     return;
}


int main(){
     setIO;
     inout;

     int testcase=1;
           rd(testcase);
     while (testcase--) {
          solve();
     }

     Time;
     return 0;
}











/*      THE END */
