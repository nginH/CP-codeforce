//
//  main.cpp
//  Missing Number
//
//  Created by Harsh Anand on 28/06/2023.
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


// n+(n-1)*d

/*
int main(){


	int ans=0;
	int n;
	cin>>n;
	vector<int> v;
	for(int i=0; i<n; i++){
		int n;
		cin>>n;
		v.push_back(n);
	}
	sort(v.begin(), v.end());
int	comman_difference = v[1]-v[0];
	br;
	for (int i=0; i<n; ++i) {
		if (v[i+1]-v[i] == comman_difference) {
			continue;
		}else{
			ans= v[1] + (v[i]) * comman_difference;
			v.push_back(ans);
			}
	}

	for (int i=0; i<v.size(); ++i) {
		cout<<v[i]<<" ";
	}
	br;
	cout<<ans;
	br;
	return 0;
}

*/

using namespace std;

int main() {
#ifndef ONLINE_JUDGE
	inout;
#endif
	long long int n, input, sum = 0;
	cin >> n;

	for (int i = 0 ; i < n - 1 ; i++) {
		cin >> input;
		sum += input;
	}

	cout << ( n * (n + 1) ) / 2 - sum << endl;

	return 0;
}
