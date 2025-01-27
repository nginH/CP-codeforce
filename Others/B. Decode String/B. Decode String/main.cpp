//
//  main.cpp
//  B. Decode String
//
//  Created by Harsh Anand on 27/08/2023.
//https://codeforces.com/problemset/problem/1729/B



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

#define inout freopen("/Users/harshanand/Desktop/C++ file/B. Decode String/B. Decode String/input.txt","r",stdin); freopen("/Users/harshanand/Desktop/C++ file/B. Decode String/B. Decode String/output.txt", "w", stdout);

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define br cout<< "\n" //yey html

char maped( int x){
     return  (96+x);
}

void solve(int a){
          // write ur shitty code here
     string v;
     cin>>v;
     v=v+"$$$";
     vector<char> s;
     int cc=0;
     for (int i=0; i<v.size(); ++i) {
         /* if (cc==0){
               s.push_back(maped((v[i]-48)));
          } else*/ if( v[i+2]=='0'){
               s.push_back(maped(((int)v[i]-48)*10+((int)v[i+1]-48)));
               i+=2;
          }else if(v[i]=='$'){
               continue;
          }else
               s.push_back(maped((v[i]-48)));
          cc++;

     }
     for(auto x:s){
          cout<<x;
     }
     br;

/*
 code
 aj
 abacaba
 ll
 codeforces
 aaaak
 aaaaj
 aaaaa
 zf
 */


     return;
}




int main(){
#ifndef ONLINE_JUDGE
     inout;
#endif
     int test;
     cin>> test;
     while (test--) {
          int a;
          cin>>a;
          solve(a);
     }
     return 0;
}


