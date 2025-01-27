//
//  main.cpp
//  A. Red Versus Blue
//
//  Created by Harsh Anand on 28/09/2023.
//https://codeforces.com/problemset/problem/1659/A

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
#include <thread>
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



void solve(int a, int b, int c){


     float x = ceil((b-1)/c);


     vector<char> v;

     v.reserve(150);

     int blue=0;
     int xnxx=0;
//     debug(x);

     for (int i=1; i<=a; ++i) {
          if(x==blue &&  xnxx<c){
               v.push_back('B');
               xnxx++;
               blue=-1;
          }else{
               v.push_back('r');
          }
          blue++;
     }

     for( auto x:v){
          cout<<x;
     }
     br;









     return;
}




int main(){
     {
#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/A. Red Versus Blue/A. Red Versus Blue/input.txt","r",stdin);
     freopen("/Users/harshanand/Desktop/C++ file/A. Red Versus Blue/A. Red Versus Blue/output.txt", "w", stdout);
#endif
     }


     int test;

     cin>> test;
     while (test--) {
          int a,b,c;
          cin>>a>>b>>c;

          solve(a,b,c);



     }

     return 0;
}


