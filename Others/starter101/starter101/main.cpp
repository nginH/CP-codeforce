//
//  main.cpp
//  starter101
//
//  Created by Harsh Anand on 20/09/2023.
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

#define inout freopen("/Users/harshanand/Desktop/C++ file/starter101/starter101/input.txt","r",stdin); freopen("/Users/harshanand/Desktop/C++ file/starter101/starter101/output.txt", "w", stdout);

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define br cout<< "\n" //yey html



#define  MIN(a,b) a<b? a:b



void solve(int a, int b){
          // write ur shitty code here
     int minn=0;
     for (int i=0; i<=10000; ++i) {
          minn=MIN(minn, abs(abs(i^a) - abs(i^b)));
     }

     cout<<minn<<"\n";


     return;
}




int main(){

#ifndef ONLINE_JUDGE
     inout;
#endif

     int test;
     cin>> test;
     while (test--) {
          int a,b;
          cin>>a>>b;

          solve( a,b);



     }

     return 0;
}


