//
//  main.cpp
//  B. Closest to the Left
//
//  Created by Harsh Anand on 22/06/2023.
//https://codeforces.com/edu/course/2/lesson/6/1/practice/contest/283911/problem/B

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

void solve(int a[],int n, int k){
		// write ur shitty code here
	int l = -1, r = n,m = 0;

	int minIndex = n + 1;

	while(r >= l) {
		//cout<<m+1<<"\n";
		 m = (l + r) / 2;
		if(k < a[m]) {
			minIndex=m;
			r = m-1; // a[l] <= k < a[m] <= a[r]
		} else {
			l = m+1; // a[l] <= a[m] <= k < a[r]
		}
	}

		cout<<minIndex<<"\n";
	return;
}




int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif
	int a,b; cin>>a>>b;

	int arr[a]; int arr2[b];

	for (int i=0; i<a; ++i) {
		cin>> arr[i];
	}
	for (int i=0; i<b; ++i) {
		cin>> arr2[i];
		int key= arr2[i];
		solve(arr, a, key);


	}



	return 0;
}


