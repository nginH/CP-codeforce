//
//  CSES Static Range Minimum Queries.cpp
//  Dynamic programming
//
//  Created by Harsh Anand on 17/03/2024.
//



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

#define  min(a,b) a<b?a:b

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

vector<long long int> bit(200001);

long long int getmin(long long int r) {
    long long  int ret = Inf;
     for (; r >= 0; r = (r & (r + 1)) - 1)
          ret = min(ret, bit[r]);
     return ret;
}

long long int getmin(long long int  idx, long long int r) {
     return min(getmin(r), getmin(idx));
}

void update(long long int data, long long int idx) {
     for (; idx < bit.size(); idx += idx & (-idx)) {
          bit[idx] =min(bit[idx],data);
     }
}

void solve() {

     bit.assign(200001, INT_MAX);
     long long int a, b;
     cin >> a >> b;
     vector<long long int> v(a+1);
     for (long long int i = 1; i <= a; ++i) {
          long long int a;
          cin >> a;
          v[i]=a;
          update(a, i);
     }

     while (b--) {
          long long int p=2, m, n;
          cin>>m >> n;
          if (p == 2) {
               cout<<getmin(m, n)<<"\n";

          }
     }

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

