	//
	//  main.cpp
	//  stater 99
	//
	//  Created by Harsh Anand on 19/07/2023.
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
#include <boost/multiprecision/cpp_int.hpp>

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

void solve(int a, int b){
		// write ur shitty code here
	int count=0, ans=0;
	string s;
	cin>>s;
	map<char, int> m;

	for (int i=0; i<s.size(); ++i) {
		m[s[i]]++;
	}
	int  up=0, down=0, left=0, rit=0;

	for(auto x:m){
		if (x.first =='R') {
			rit=x.second;
		}
		if (x.first =='U') {
			up=x.second;
		}
		if (x.first =='D') {
			down=x.second;
		}
		if (x.first =='L') {
			left=x.second;
		}
	}

	int x_cor = abs(rit-left);
	int y_cor = abs(up-down);



	//debug_2(x_cor, y_cor);

	if (x_cor >=abs(a) && y_cor>= abs(b)) {
		yes;
	}else
		no;


	return;
}




int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif

	int test;
	cin>> test;
	while (test--) {
		int a,b;
		cin>>a>>b;

		solve(a,b);

	}

	return 0;
}


