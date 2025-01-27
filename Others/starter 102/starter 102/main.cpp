//
//  main.cpp
//  starter 102
//
//  Created by Harsh Anand on 27/09/2023.
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
//#include <bits/stdc++.h>
#include <vector>
#include <thread>
using namespace std;
using namespace chrono;

#define H_A code by Harsh Anand

#define Inf 2147483647
#define Pi acos(-1.0)

#define inout freopen("/Users/harshanand/Desktop/C++ file/starter 102/starter 102/input.txt","r",stdin); freopen("/Users/harshanand/Desktop/C++ file/starter 102/starter 102/out.txt", "w", stdout);

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



void solve(int n, int k){

}




int main(){

#ifndef ONLINE_JUDGE
     inout;
#endif

//     cout<<"hello";
     int test;
     cin>> test;
     while (test--) {
          int a, b;
          cin>>a>>b;

//          stringtodecimal("00001000");

//          cout<<binary_string_to_string("00010100");
//          solve(a,b);



     }

     return 0;
}


