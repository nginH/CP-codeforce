//
//  main.cpp
//  A. Make it Beautiful
//https://codeforces.com/contest/1783/problem/A
//  Created by Harsh Anand on 18/06/2023.
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

#define Rd(r) freopen(r, "r", stdin)
#define Wt(w) freopen(w, "w", stdout)

#define Inf 2147483647
#define Pi acos(-1.0)

#define inout freopen("/Users/harshanand/Desktop/input.txt","r",stdin); freopen("/Users/harshanand/Desktop/output.txt", "w", stdout);

#define  ll long long
#define ld long double

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";

#define no cout<<"NO\n";
#define yes cout<<"YES\n";

#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define  br cout<<"\n";

void solve(vector<int> v,int a ){

	bool check=false;
	int sum=0;
	sort(v.rbegin(), v.rend());
	swap(v[1], v[a-1]);
	sum=0;
	for (int i=0; i<a-1; ++i) {
		sum=sum+v[i];
		if (sum==v[i+1]) {
			check =true;
		}
	}
	
	if (check==true){
		no;
	}else{
		cout<<"YES\n";
		for (int i=0; i<a; ++i) {
			cout<<v[i]<<" ";
		}
		br;
	}
}

int main(void){

#ifndef ONLINE_JUDGE
	inout;
#endif

	int test;
	cin>> test;
	while (test--) {
		int a;
		cin>>a;
		vector<int > v(a);

		for (int i=0; i<a; ++i) {
			cin>>v[i];
		}
		solve(v,a);


	}

	return 0;
}


