//
//  main.cpp
//  CSES Coin Piles
//
//  Created by Harsh Anand on 10/10/2023.
//

#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define H_A code by Harsh Anand

#define Inf 2147483647
#define Pi acos(-1.0)

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define br cout<< "\n"; //yey html



string btos( string se){
     string s= bitset<32> (se).to_string();
     return s;
}

uint64_t s_to_d( string st){
     uint64_t number;
     number = strtoull(st.c_str (),NULL,2);
     return number;
}

bool solve_attemp2(int64_t a , int64_t b){
     if (abs(a-b)<=(max(a,b))/2){
          if ((a+b)%3==0) return true;
     }
     return false;

}



bool solve(uint64_t a, uint64_t b){
//     cout<<"2 "<<a<<" "<<b <<" = ";
     while (a>0 && b>0) {
         if (a>=b){
               a=(a-2);
               b=(b-1);
          }
         else{
              a=(a-1);
              b=(b-2);
         }
     }
     if(a==0 && b==0){
//             yes;
          return true;
     }


     return false;
}

int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/CSES Coin Piles/CSES Coin Piles/input.txt","r",stdin);
     freopen("/Users/harshanand/Desktop/C++ file/CSES Coin Piles/d.out", "w", stdout);
     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);


     int test;
     cin>> test;
     while (test--) {
          int a,b;
          cin>>a>>b;

          solve_attemp2(a, b)?yes:no;
//
//          for (int i=0; i<=50; ++i) {
//               for (int j =0; j<=50; j++) {
//                    if (solve(i, j)!=solve_attemp2(i, j)){
//                         cout<<i<<" "<<j<<"\n";
//                    }
//               }
//          }
     }
#ifndef ONLINE_JUDGE
     auto end = high_resolution_clock::now();
     std::chrono::duration<double> time=(end- start);
     milliseconds d= std::chrono::duration_cast<std::chrono::milliseconds>(time);
     cout<<"\n"<<d.count()<<"ms\n";
#endif

     return 0;
}

