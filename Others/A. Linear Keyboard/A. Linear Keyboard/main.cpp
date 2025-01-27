//
//  main.cpp
//  A. Linear Keyboard
//
//  Created by Harsh Anand on 26/06/2023.
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

#define inout freopen("/Users/harshanand/Desktop/input.txt","r",stdin); freopen("/Users/harshanand/Desktop/output.txt", "w", stdout);

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define br cout<< "\n"; //yey html

void solve(string  a,string  b){
		// write ur shitty code here
	vector<int > v;
	for (int j=0; j<b.size(); ++j){
		for (int i=0 ; i<a.size(); ++i) {
			if (b[j]==a[i]) {
				v.push_back(i+1);
			    break;
			}
		}
	}
    int	sum=0;

	for (int i=0; i<v.size()-1; ++i) {
		sum+=abs(v[i]-v[i+1]);
	}
	cout<<sum;
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
		string a,b;
		cin>>a>>b;

		solve(a,b);

	}

	return 0;
}


