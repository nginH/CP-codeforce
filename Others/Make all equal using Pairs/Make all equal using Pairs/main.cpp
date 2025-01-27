//
//  main.cpp
//  Make all equal using Pairs
//
//  Created by Harsh Anand on 18/07/2023.
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
#include <vector>
using namespace std;

#define H_A code by Harsh Anand

#define Inf 2147483647
#define Pi acos(-1.0)

#define inout freopen("/Users/harshanand/Desktop/input.txt","r",stdin); //freopen("/Users/harshanand/Desktop/output.txt", "w", stdout);

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define br cout<< "\n"; //yey html



void solve(int n){
	vector<int > v(n);
	map<int, int>m;
	for (int i=0; i<n; ++i) {
		cin>>v[i];
		m[v[i]]= m[v[i]]+1;
	}
	int ans=0;
	for (auto x :m) {
		cout<< x.first<<" "<< x.second<<"\n";
		ans= max(ans, x.second);
	}
	cout<< (n-ans)<<"\n";
	br
	br
	return;
}




int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif

	int test;
	cin>> test;
	while (test--) {
		int a;
		cin>>a;
		solve(a);
	}
	return 0;
}


