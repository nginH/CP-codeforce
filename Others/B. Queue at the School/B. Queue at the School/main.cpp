//
//  main.cpp
//  B. Queue at the School
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

#define inout freopen("/Users/harshanand/Desktop/C++ file/B. Queue at the School/B. Queue at the School/i.txt","r",stdin); freopen("/Users/harshanand/Desktop/C++ file/B. Queue at the School/B. Queue at the School/out.txt", "w", stdout);

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define br cout<< "\n" //yey html

void solve(int a, int b){
          // write ur shitty code here
     string s;
     cin>>s;


     while (b--) {
          for (int i=0; i<s.size()-1; ++i) {
               if (s[i]=='B' && s[i+1]=='G') {
                    swap(s[i], s[i+1]);
                    i++;
               }
          }
     }
     cout<<s;

     return;
}




int main(){

#ifndef ONLINE_JUDGE
     inout;
#endif

     int a , b;
     cin>>a>>b;
     solve(a, b);

     return 0;
}


