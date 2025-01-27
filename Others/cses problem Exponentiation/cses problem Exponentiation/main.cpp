//
//  main.cpp
//  cses problem Exponentiation
//
//  Created by Harsh Anand on 12/10/2023.
//

#include <bits/stdc++.h>
//#include <bits/debug.h>
using namespace std;
using namespace chrono;
#define H_A code by Harsh Anand

#define Inf 2147483647
#define Pi acos(-1.0)
#define mod 1000000007

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define br cout<< "\n" //yey html



string btos( string se){
     string s= bitset<32> (se).to_string();
     return s;
}

uint64_t s_to_d( string st){
     uint64_t number;
     number = strtoull(st.c_str (),NULL,2);
     return number;
}



uint64_t solve(uint64_t a, uint64_t b){
     if (b==0) return 1;
      uint64_t result=solve(a, b/2);
     return b&1 ?(a*result*result):result*result;
}

const int len=16;

void solve2nd(uint64_t a, uint64_t b){
     uint64_t n=b;
     int v[len];
     for (int i=0; i<len; ++i) {
          v[i]=0;
     }
     int i=0;
     while (n!=0) {
          v[i++]=n%2;
          n/=2;
     }
     vector<int>arr;
     arr.reserve(64);
     for (int j=0; j<len; ++j) {
          arr.push_back(v[j]==1?pow(2, j):0);
     }
//     dbg(arr);
}


void solveAttempt3(long a, long long n){

     int64_t ans =1;
     while (n>0 ) {
          if (n&1)
               ans=(ans*a)%mod;
          a=(a*a)%mod;
          n>>=1;
     }
     printf("%lld\n", ans);

}





int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/cses problem Exponentiation/cses problem Exponentiation/input.txt","r",stdin);
     freopen("/Users/harshanand/Desktop/C++ file/cses problem Exponentiation/cses problem Exponentiation/output.txt", "w", stdout);
     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);


     int test;
     cin>> test;
     while (test--) {

          long long  a,b;
          cin>>a>>b;
          solveAttempt3(a, b);

     }



#ifndef ONLINE_JUDGE
     auto end = high_resolution_clock::now();
     std::chrono::duration<double> time=(end- start);
     milliseconds d= std::chrono::duration_cast<std::chrono::milliseconds>(time);
     cout<<"\n"<<d.count()<<"ms\n";
#endif

     return 0;
}


