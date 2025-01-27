//
//  Maximum Subarray Sum.cpp
//  CSES Problem Set
//
//  Created by Harsh Anand on 13/11/2023.
//

#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#ifndef ONLINE_JUDGE
#else
#define debug(x)
#define debug_2(x,y) cerr << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#endif

#define code by Harsh Anand
#define  int(n) int n; cin>>n;
#define Inf 2147483647
#define Pi acos(-1.0)
#define no           cout<<"NO\n"
#define yes          cout<<"YES\n"
#define br           cout<< "\n"; //yey html


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

#define max(a,b) a>b?a:b

void solve(uint64_t n){
     int64_t sum=0, ans=INT_MIN;
     for (int i=0; i<n; i++) {
          int64_t x;
          cin>>x;
          sum=max(sum+x, x);
          ans=max(ans, sum);
     }
//     debug(i);
     cout<<ans;

     return;
}




int main(){


#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Set/input.txt", "r", stdin);
     freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Set/output.txt", "w", stdout);
     freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Set/error.txt", "w", stderr);
     auto start = high_resolution_clock::now();

#endif


     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     uint64_t n;
     cin>>n;
     solve(n);

#ifndef ONLINE_JUDGE
     auto end = high_resolution_clock::now();
     std::chrono::duration<double> time=(end- start);
     milliseconds d= std::chrono::duration_cast<std::chrono::milliseconds>(time);
     cerr<<"\n"<<d.count()<<"ms\n";
#endif
     return 0;
}












     // To: MoM & DaD
     // One day.. i'll make you proud;


