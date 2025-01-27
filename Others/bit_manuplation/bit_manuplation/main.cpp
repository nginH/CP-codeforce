//
//  main.cpp
//  bit_manuplation
//
//  Created by Harsh Anand on 11/09/2023.
//
#include <iostream>
#include <string>
#include <bitset>
#include <vector>
#include <math.h>
#include <time.h>
using namespace std;

#define H_A code by Harsh Anand

#define Inf 2147483647
#define Pi acos(-1.0)

#define inout freopen("/Users/harshanand/Desktop/C++ file/bit_manuplation/bit_manuplation/input.txt","r",stdin); freopen("/Users/harshanand/Desktop/C++ file/bit_manuplation/bit_manuplation/out.txt", "w", stdout);

int divide(int dividend, int divisor){
     int n= dividend;
     int d=divisor;

     long long int count=0;
     int64_t x=llabs(n);
     int64_t y=llabs(d);
     if (y==1) {
          count=x;
          goto final;
     }
     if( x<y){
          return 0;
     }
     count= pow( 2, log2(x)- log2(y)) +0.0000001;
final:
     if (x!=n || y!=d) {
          count=-count;
     }
     if (x!=n && y!=d) {
          count=llabs(count);
     }
     if (count > 2147483647) {
          count--;
     }
     int32_t anss=(int) count;
     return anss;
}

void divd(int n, int d){
     long long int count=0;
     int64_t x=llabs(n);
     int64_t y=llabs(d);

     if (y==1) {
          count=x;
          goto final;
     }

  count=   pow(2, log2(x)- log2(y))+ 0.0000001;

final:
     if (x!=n || y!=d) {
          count=-count;
     }
     if (x!=n && y!=d) {
          count=llabs(count);
     }
     if (count > Inf) {
          count--;
     }

//     int32_t anss=(int) count;

     cout<<count<<"\n";
}


int main(){

#ifndef ONLINE_JUDGE
     inout;
#endif
     clock_t s,e;
     float f;
     s= clock();


     int test;
     cin>> test;
     while (test--) {
          int a,b;
          cin>>a>>b;

       divd(a, b);
     }
     e=clock();
     f= (float)(e-s)/100000;

    // cout<<"\ntime taken to excute is : "<< f<<"\n";

     return 0;
}


