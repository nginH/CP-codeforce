	//
	//  main.cpp
	//  A. Next Round
	//
	//  Created by Harsh Anand on 25/06/2023.
	//https://codeforces.com/contest/158/problem/A



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
/*
 8 5
 10 9 8 7 7 7 5 5
 */
int main() {

#ifndef ONLINE_JUDGE
	inout;
#endif

	int n, a;
	cin >> n >> a;
	a=a-1;
	vector<int> v(n);
	map<int, int> m;
	for (int i = 0; i < n; ++i) {
		cin >> v[i];
		if (v[i] == 0) {
			v.pop_back();
		}else
	    	m[v[i]]++;
	}

	int sum = 0;
	 for (auto x : m) {
			if (x.first >= v[a]) {
				int ans = x.second;
				sum += ans;
			}
		}
	cout << sum;
	br;
	return 0;
}
