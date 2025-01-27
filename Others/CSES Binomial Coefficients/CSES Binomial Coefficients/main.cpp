//
//  main.cpp
//  CSES Binomial Coefficients
//
//  Created by Harsh Anand on 02/03/2024.
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
freopen("/Users/harshanand/Desktop/C++ file/CSES Binomial Coefficients/input.txt", "r", stdin)  ;\
freopen("/Users/harshanand/Desktop/C++ file/CSES Binomial Coefficients/output.txt", "w", stdout);\
freopen("/Users/harshanand/Desktop/C++ file/CSES Binomial Coefficients/error.txt", "w", stderr) ; \
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

#define mod 1000000007
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


//
//long long int  recursiveNcR(int n, int r){
//     if (r==0 ||n==r) {
//          return 1;
//     }else{
//          return recursiveNcR(n-1, r-1)+recursiveNcR(n-1, r);
//     }
//}


void construct( int n , int r){
     int c[10][10];
     for (int i=0; i<10; ++i) {
          for (int j=0; j<10; ++j) {
               c[i][j]=0;
          }

          c[0][0]=1;

          for(int i=1; i<=10; ++i){
               c[0][n]=c[n][n]=1;
               for (int j=1; j<=n; ++j) {
                    c[n][j]=c[n-1][j-1]+c[n-1][j];
               }
          }
          for (int i=0; i<10; ++i) {
               for (int j=0; j<10; ++j) {
                    cout<<c[i][j]<<" ";
               }
               cout<<"\n";
          }
     }
}

void solve(void){

     int a,b;
     rd(a,b);
     long double ans=1;
     for (int i=0; i<a-b; ++i) {
          ans*=a-i;
          ans/=i+1;
     }
     construct(a, b);

     long f=(long)(ans+0.0001)%mod;
     cout<<f<<"\n";
     return;
}



void addNumber(){
//     int a[]={3,2,1,4,5,6};
//     int b[]= {4,5,6,7,8,9};
     string c,d;
     rd(c,d);
     int a[100];
     int b[100];


     dbg(1234567 + 123456);
     for (int i= 0; i<c.size(); ++i) {
          a[i]=c[i]-48;
     }
     for (int i=0; i<d.size(); ++i) {
          b[i]=d[i]-48;
     }

     int carry=0;
     vector<int> v;
     for (size_t i=max(c.size(), d.size()); i>=0; i--) {
          v.push_back((a[i]+b[i]+carry)%10);
          carry=(a[i]+b[i]+carry)/10;
     }
     reverse(v.begin(), v.end());
     for (auto x : v) {
          cout<<x;
     }
     cout<<"\n";
     dbg(v);



}


int main(){
     ios_base::sync_with_stdio(false);
     cin.tie(nullptr);
     cout.tie(nullptr);
     inout;
     int testcase=1;
//           rd(testcase);
     while (testcase--) {
//          solve();
          addNumber();
     }

     Time;
     return 0;
}











/*      THE END */
