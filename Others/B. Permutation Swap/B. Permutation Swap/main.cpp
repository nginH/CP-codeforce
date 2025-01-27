//
//  main.cpp
//  B. Permutation Swap
//
//  Created by Harsh Anand on 10/07/2023.
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


signed main(){

	ios_base::sync_with_stdio(false); cin.tie(NULL); cout.tie(NULL);

#ifndef ONLINE_JUDGE
	inout;
#endif

	int test;
	cin>> test;
	while (test--) {
		int n;

		cin>>n;
		int ans=0;
		for (int i=1 ; i<=n; ++i) {
			int x;cin>>x;
			ans= gcd(ans, abs(x-i));

		}
		cout<< ans;
		br;


	}


}


