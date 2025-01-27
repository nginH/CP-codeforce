//
//  main.cpp
//  A. Binary Search ITMO ACH
//
//  Created by Harsh Anand on 19/06/2023.
//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/A

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

#define inout freopen("/Users/harshanand/Desktop/input.txt","r",stdin); freopen("/Users/harshanand/Desktop/output.txt", "w", stdout);

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define br cout<< "\n"; //yey html
						// key



bool binary( int *arr, int len, int key){

	int left =0,right =( len-1) ,mid;
	int x=0;
	while(left-right<1){

		if ( x==len)
		break;
		mid=abs(left+right)/2;
		if (arr[mid]==key){
			return true ;
		}

		else if (key<arr[mid]){
			right= abs(1-mid);
		}

		else if( key > arr[mid])
		left= abs(1+mid);
		x++;
	}
	return false;
}


int main(){

  #ifndef ONLINE_JUDGE
	inout;
  #endif

	int a,x;cin>>a>>x;


		int b[a], arr[x];
		for(int i=0; i<a; ++i){
			cin>>b[i];
		}

	    for (int i=0; i<x ;++i) {
		cin>>arr[i];
		int key=arr[i];
		cout<<binary(b, a, key);
			br;
	}

	return 0;
}

