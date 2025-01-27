       //
       //  A. Unimodal Array.cpp
       //  CODEFORCE's
       //https://codeforces.com/contest/831/problem/A
       //  Created by Harsh Anand on 19/11/2023.
       //

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#include <array>
#ifndef ONLINE_JUDGE
#include <bits/debug.h>
#define inout  freopen("/Users/harshanand/Desktop/C++ file/CODEFORCE's/CODEFORCE's/file/input.txt", "r", stdin) ; freopen("/Users/harshanand/Desktop/C++ file/CODEFORCE's/CODEFORCE's/file/output.txt", "w", stdout);freopen("/Users/harshanand/Desktop/C++ file/CODEFORCE's/CODEFORCE's/error.txt", "w", stderr) ; \
auto start = high_resolution_clock::now();

#define Time auto end = high_resolution_clock::now();\
std::chrono::duration<double> time=(end - start);\
milliseconds d = std::chrono::duration_cast<std::chrono::milliseconds>(time);\
cerr<<"\n"<<d.count()<<"ms\n";

#else
#define inout;
#define Time;
#define debug(...);
#define debug_2(x,y) cerr << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#endif

#define setIO ios_base::sync_with_stdio(false); cin.tie(nullptr); cout.tie(nullptr);

#define code by Harsh Anand
#define Inf 2147483647
#define Pi acos(-1.0)
#define no           cout<<"NO\n"
#define yes          cout<<"YES\n"
#define br           cout<< "\n";


#define  max(a,b) a>b?a:b;
#define  min(a,b) a<b?a:b;
template <typename T> void rd(T& a) {  cin >> a; }
template <typename T, typename... Args> void rd(T& a, Args&... args) { cin >> a;rd(args...);}
template <typename T, typename... Args> void wt(T& a, Args&... args) { cout<< a<<" ";wt(args...); cout<<"\n";}
template <typename T> bool cequ(T& a, T b) { return b == a ? (a = b, true) : false; }
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







bool solve(void){
       uint32_t n,m=0;
       rd(n);
       vector<int> v(n);
       v.reserve(n+1);
       unordered_map<int , int >ma;
       for (int i=0;i<n; ++i) {
              cin>>v[i];
              ma[v[i]]++;
       }
       if(ma[0]==n){
              return true;
       }

       v.push_back(0);
       bool l,o,e;
       l=o=e=false;
       int i=0;
       for ( ;i<n; ++i) {
              if (v[i+1]-v[i]>0 ) {
                     l=true;
                     continue;          }
              if (v[i+1]-v[i]==0 ) {
                     goto STEP2;
              }
              if (v[i+1]-v[i]<0 ) {
                     goto STEP3;
              }
       }
STEP2:
       for ( ;i<n; ++i) {
              if (v[i+1]-v[i]>0 ) {
                     return false;
              }
              if (v[i+1]-v[i]==0) {
                     m++;
                     o=true;
                     continue;
              }
              if (v[i+1]-v[i]<0 ) {
                     goto STEP3;

              }
       }

STEP3:
       for (; i<n; ++i) {
              if (v[i+1]-v[i]>0 ) {
                     return false;
              }
              if (v[i+1]-v[i]==0) {
                     return false;
              }
              if (v[i+1]-v[i]<0 ) {
                     e=true;
                     continue;
              }
       }
       debug(i,m)
       if (m==n) {
              return true;
       }
       if (i==n && l&&o&&e) {
              return true;
       }else
              return false;
}





bool solve_attemp2(void){
       int n;
       rd(n);
       int arr[n];
       for (int i=0; i<n; ++i) {
              cin>>arr[i];
       }
       if (n==1) {
              return true;
       }
       if (n==2) {
              return false;
       }
       int a,b,c;
       a=b=c=0;
       int i=0;
       int k=0;
       for (;i<n-1; ++i) {
              debug(arr[i], arr[i+1])
              if (cmax(arr[i], arr[i+1]) ) {
                     if (a) {
                            break;
                     }
              }else if (cequ(arr[i], arr[i+1])  && !a){
                     k++;
                     b=true;
              }
              else{

                     a=true;
              }
       }
       debug(i,a,b,k)
              //condition chk


       if(b==true and a==false) {
              if (k==n-1) {
                     return true;
              }
              return false;
       }
       int j= max(i, k);

       if (b && a&& i==(n-1)) {
              return true;
       }else if ( i==(n-1)){
              return true;
       }
       return false;
}

 /*hello there !9u*/




int main(){
       setIO;
       inout;

       int testcase=1;
              //           rd(testcase);
       while (testcase--) {
              solve_attemp2 ()?yes:no;
       }

       Time;
       return 0;
}












       // To: MoM & DaD
       // One day.. i'll make you proud;





