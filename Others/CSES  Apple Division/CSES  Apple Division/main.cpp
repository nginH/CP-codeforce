//
//  main.cpp
//  CSES  Apple Division
//
//  Created by Harsh Anand on 24/10/2023.
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
freopen("/Users/harshanand/Desktop/C++ file/CSES  Apple Division/CSES  Apple Division/input.txt", "r", stdin)  ;\
freopen("/Users/harshanand/Desktop/C++ file/CSES  Apple Division/CSES  Apple Division/output.txt", "w", stdout);\
freopen("/Users/harshanand/Desktop/C++ file/CSES  Apple Division/CSES  Apple Division/error.txt", "w", stderr) ; \
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

#define min(a,b) a<b?a:b
#define max(a,b) a>b?a:b
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



static long long int k=INT_MAX;
void combinational(int *v, int n){
//     br;
     vector<long long int>ans;
     ans.reserve(100);
     long long int x=0,y=0;
     for (int i=0; i<n-1; ++i) {
          y+=v[i];
          for (int j=i+1; j<n; ++j) {
               x+=v[j];
          }
          ans.push_back(y);
          ans.push_back(x);
          x=0;
     }
//     dbg(ans);
     for (int i=0; i<ans.size(); ++i) {
          for (int j=i+1; j<ans.size(); ++j) {
               k=min(k, abs(ans[i]-ans[j]));
          }
     }

}
void heapPermutation(int a[], int size, int n)
{
     if (size == 1) {
          combinational(a, n);
          return ;
     }
     for (int i = 0; i < size; i++) {
          heapPermutation(a, size - 1, n);
          if (size % 2 == 1)
               swap(a[0], a[size - 1]);
          else
               swap(a[i], a[size - 1]);
     }
}



void solve(void){

     int n;
     rd(n);
     int v[n];
     for (int i=0; i<n; ++i) {
          cin>>v[i];
     }
     heapPermutation(v, n, n);
     return;
}



int main(){
     setIO;
     inout;

     int testcase=1;
          // rd(testcase);
     while (testcase--) {
          solve();
          cout<<k<<"\n";
     }

     Time;
     return 0;
}











/*      THE END */
