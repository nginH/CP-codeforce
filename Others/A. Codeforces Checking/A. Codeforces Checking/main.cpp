//
//  main.cpp
//  A. Codeforces Checking
//
//  Created by Harsh Anand on 24/06/2023.
//https://codeforces.com/problemset/problem/1791/A

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

void solve(void){
	string s;
	int count=0;
	cin>>s;
	char s2[11]= {'c','o','d','e','f','o','r','c','e','s'};
	for (int i=0; i<10; ++i) {
//debug_2(s[0], s2[i]);
		if (s[0]==s2[i]) {
			count++;
			break;
		}
	}
	if (count==1) {
		yes;
	} else {
		no;
	}
	return;
}




int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif

	int test;
	cin>> test;
	while (test--) {
		solve();

	}

	return 0;
}


