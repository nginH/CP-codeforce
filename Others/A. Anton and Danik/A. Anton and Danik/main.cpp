//
//  main.cpp
//  A. Anton and Danik
//
//  Created by Harsh Anand on 23/06/2023.
//https://codeforces.com/problemset/problem/734/A


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
#include <string>
#include <unordered_map>
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




int main(){
	
#ifndef ONLINE_JUDGE
	inout;
#endif
	
	int n;cin>>n;

	char arr[n];

unordered_map<char, int> m;


		for (int i=0; i<n; ++i) {
			cin>> arr[n];
			m[arr[n]]++;
		}

	int ans=m['A'];
	int ans2= m['D'];
	if(ans==ans2){
		cout<<"Friendship";
		br;
		return 0;
	}

	ans>ans2?cout<<"Anton\n": cout<<"Danik\n";



}


