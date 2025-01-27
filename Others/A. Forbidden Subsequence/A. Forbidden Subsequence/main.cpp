//
//  main.cpp
//  A. Forbidden Subsequence
//
//  Created by Harsh Anand on 24/06/2023.
//https://codeforces.com/problemset/problem/1617/A


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
#define debug_2(x,y) cout<< x <<" = " << y <<" :: ";
#define debug_1(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";

#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define br cout<< "\n"; //yey html

void check(string s){
	map<char, int> m;


	for (int i=0; i<s.size(); ++i) {
		m[s[i]]++;
	}
	vector<char>  v;
	for(auto x:m){
		cout<<x.first<< " " <<x.second;
		v.push_back(x.first);
	}









}

void solve(void){

	string s1, s2;
	cin>>s1>>s2;

	sort(s1.begin(), s1.end());

	check(s1);


//	auto ip= unique(s1.begin(), s1.end());
//
//	cout << string(s1.begin(), ip);









	br;


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


