//
//  main.cpp
//  A. Chat room
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

#define inout freopen("/Users/harshanand/Desktop/C++ file/A. Chat room/A. Chat room/in.txt","r",stdin); freopen("/Users/harshanand/Desktop/C++ file/A. Chat room/A. Chat room/out.txt", "w", stdout);

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
     string s;
     cin>>s;
     vector<char>  v;
     int x=0;
     for (int i=0; i<s.size(); ++i) {
          if(s[i] != s[i+1]){
               v.push_back(s[i]);
          }
          if (s[i]=='l' && s[i+1]=='l' && x==0){
               v.push_back(s[i]);
               x++;
               cout<<s[i];
          }else{
               x=0;
          }
     }
     for (auto x:v) {
          cout<<x;
     }

     return;
}




int main(){

#ifndef ONLINE_JUDGE
     inout;
#endif



          solve();


     return 0;
}


