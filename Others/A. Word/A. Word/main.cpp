//
//  main.cpp
//  A. Word
//
//  Created by Harsh Anand on 23/06/2023.
//https://codeforces.com/problemset/problem/59/A


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


int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif


	string s;
	cin>> s;
	int count=0;
	for (int i=0; i<s.size(); ++i) {
		if (s[i]>=65 &&  s[i]<=90){
			count++;
		}
	}

	if (count>(s.size()-count)) {
		transform(s.begin(), s.end(), s.begin(),::toupper);
		cout<<s;
		br;
	}else{
		transform(s.begin(), s.end(), s.begin(), ::tolower);
		cout<<s;
		br;
	}


	return 0;
}


