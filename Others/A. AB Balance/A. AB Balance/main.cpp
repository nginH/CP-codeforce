//
//  main.cpp
/// A. FootballA. Football
//
//  Created by Harsh Anand on 03/07/2023.
//  https://codeforces.com/problemset/problem/96/A



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

#define inout freopen("/Users/harshanand/Desktop/input.txt","r",stdin); 

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n";
#define yes cout<<"YES\n"
#define br cout<< "\n"; //yey html




int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif


	vector<int>v(2);

	v.push_back(2);
	v.push_back(3);


	v.emplace_back(4);

	for (int i=0; i<v.size(); ++i) {
		cout<<v[i];
		br;
	}



		return 0;
	}

