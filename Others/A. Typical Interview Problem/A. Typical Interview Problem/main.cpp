//
//  main.cpp
//  A. Typical Interview Problem
//
//  Created by Harsh Anand on 29/09/2023.
//https://codeforces.com/contest/1796/problem/A
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
#define br cout<< "\n" //yey html



string btos( string se){
     string s= bitset<32> (se).to_string();
     return s;
}

d
uint64_t s_to_d( string st){
     uint64_t number;
     number = strtoull(st.c_str (),NULL,2);
     return number;
}



bool solve( string s,string b){

     auto start= high_resolution_clock::now();

     for (int i=0; i<=s.size()- b.size(); ++i) {
          int x=0;
          int j=0;
          for (; j<b.size(); ++j) {
               if(s[i+j]!=b[j]){
                    break;
               }
          }
          if(j==b.size()){
               return true;
          }

     }
     return false;
}


int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/A. Typical Interview Problem/A. Typical Interview Problem/input.txt","r",stdin);
     freopen("/Users/harshanand/Desktop/C++ file/A. Typical Interview Problem/A. Typical Interview Problem/output.txt", "w", stdout);
     auto start= high_resolution_clock::now();

#endif

     int test;
     cin>> test;

     cout<<"hello world";
     int x=1000;
     int n=1;
     string s;
     while (x!=n) {
          if(n%3==0) s+="F";
          if(n%5==0) s+="B";
               n++;
     }


     while (test--) {
          int a;
          string b;
          cin>>a>>b;

          if (solve(s, b)) {
               yes;
          }else
               no;

     }


#ifndef ONLINE_JUDGE


#endif

     return 0;
}


