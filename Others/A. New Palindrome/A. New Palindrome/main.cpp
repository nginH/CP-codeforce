//
//  main.cpp
//  A. New Palindrome
//
//  Created by Harsh Anand on 23/06/2023.
//https://codeforces.com/problemset/problem/1832/A

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

void solve(string s){
		// write ur shitty code here
	unordered_map<char, int > m;
	for (int i=0; i<s.size()/2; ++i) {
		m[s[i]]++;
	}
	int count=0;
	for (auto x:m) {
		//cout<<x.first;
		count++;
	}

	//debug(count);

	if (count==1) {
		no;
	}else
		yes;







	return;
}




int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif

	int test;
	cin>> test;
	while (test--) {
		string s;
		cin>>s;
		solve(s);
	}

	return 0;
}


