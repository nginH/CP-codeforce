//
//  main.cpp
//  A. Collecting Coins
//
//  Created by Harsh Anand on 22/09/2023.
//

#include <iostream>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

#define H_A code by Harsh Anand

#define Inf 2147483647
#define Pi acos(-1.0)

#define inout freopen("/Users/harshanand/Desktop/C++ file/A. Collecting Coins/A. Collecting Coins/input.txt","r",stdin); freopen("/Users/harshanand/Desktop/C++ file/A. Collecting Coins/output.txt", "w", stdout);

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define br cout<< "\n" //yey html

void solve(void){
          // write ur shitty code here

     int a,b,c,n;
     cin>>a>>b>>c>>n;


     for (int i=0; i<n; ++i) {

          n=n-i;
          int x= a+i;

          int y= x-b ;


          if( c+y== n){
               yes;
               return;
          }
     }

     no;



     return;
}




int main(){

#ifndef ONLINE_JUDGE
     inout;
#endif

     int test;
     cin>> test;
     while (test--) {

          solve();

     }

     return 0;
}


