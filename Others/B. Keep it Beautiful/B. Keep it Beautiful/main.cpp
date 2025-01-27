//
//  main.cpp
//  B. Keep it Beautiful
//
//  Created by Harsh Anand on 23/06/2023.
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
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y ;
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define br cout<< "\n"; //yey html

void solve(int n){
		// write ur shitty code here
//	int count=0, ans=0;
	int arr[n];
	int x=0;
	int &min=x;
	vector<bool> ans;
	ans.push_back(1);
	for (int i=0; i<n; ++i) {
		cin>>arr[i];


		if( arr[i]>=min){
			ans.push_back(1);
		}
		else{

			ans.push_back(0);
		}
		min= *min_element(arr, arr+i);
	}
	ans.pop_back();
	for (auto out:ans) {
		cout<<out;
	}


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
		int a; cin>>a;

		solve(a);

	}

	return 0;
}


