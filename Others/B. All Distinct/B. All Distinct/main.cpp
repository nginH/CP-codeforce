
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
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define br cout<< "\n"; //yey html



void nive(string s, string s2){
	int j=0;
	for (int i=0; i<=s.size()-s2.size(); ++i) {
		for (j=0; j<s2.size(); ++j) {
			if (s[i+j]!= s2[j]) {
				cout<<j<<" ";
				break;
			}
		}
		if (j==s2.size()) {
			cout<<"found at index "<< i<<"\n";
		}
	}


}

int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif
	string s, s2;

	cin>> s>>s2;

	nive(s,s2);
	return 0;
}


