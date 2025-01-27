//
//  main.cpp
//  A. Square String?
//
//  Created by Harsh Anand on 24/06/2023.
//https://codeforces.com/problemset/problem/1619/A



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

void check (void){
	string s;
	cin>>s;
	long long int y=s.size()/2;

	if(s.size()%2!=0){
		no;
		return;
	}
	bool ans=false;
	for ( int i=0; i<y; ++i) {
		if (s[i]==s[y+i]) {
			ans=true;
		} else {
			ans=false;
			break;
		}
	}
	if (ans) {
		yes;
	} else {
		no;
	}
}


int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif

	int test;
	cin>> test;
	while (test--) {

		check();
	}

	return 0;
}


