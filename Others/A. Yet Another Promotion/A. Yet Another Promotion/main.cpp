//
//  main.cpp
//  A. Yet Another Promotion
//
//  Created by Harsh Anand on 25/09/2023.
//https://codeforces.com/contest/1793/problem/A

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

#define inout freopen("/Users/harshanand/Desktop/C++ file/A. Yet Another Promotion/A. Yet Another Promotion/input.txt","r",stdin); freopen("/Users/harshanand/Desktop/C++ file/A. Yet Another Promotion/A. Yet Another Promotion/output.txt", "w", stdout);

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define br cout<< "\n" //yey html


int  prod(int *arr, int size, int n, int start){
     int ans=1;
     for( int i=start; i<(n || size) ;++i){
          ans*=arr[i];
     }
     return ans;
}




void solve(int a){
          // write ur shitty code here

     int v[a];

     for (int i=0; i<a; ++i) {
          cin>>v[i];
     }


     for (int i=0; i<a; ++i) {
          if(prod(v, a, i, 0)== prod(v, a, a, i)){
               if (i==0) {
                    cout<<i+1<<"\n";
                    return;
               }
               cout<<i<<"\n";
               return;
          }
     }

     cout<<"-1\n";
     return;



     return;
}




int main(){

#ifndef ONLINE_JUDGE
     inout;
#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

//     int test;
//     cin>> test;
//     while (test--) {
//          int a;
//          cin>>a;
//          solve(a);
//
//     }
     for (int i=0; i<50; ++i) {
          char x='a'+rand()%'z';
          cout<<x<<" ";
     }
     return 0;
}


