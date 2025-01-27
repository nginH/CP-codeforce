//
//  main.cpp
//  A. Way Too Long Words
//https://codeforces.com/contest/71/problem/A
//  Created by Harsh Anand on 06/06/2023.

#include <iostream>
#include <cstring>
#include <cmath>
#include <algorithm>
#include <vector>
using namespace std;

#define H_A code by Harsh Anand
#define ll long long int
#define ld long double
#define F first
#define S second
#define PB push_back
#define MP make_pair
#define inout freopen("/Users/harshanand/Desktop/C++ file/input.txt","r",stdin);freopen("/Users/harshanand/Desktop/C++ file/output.txt", "w", stdout);

	//#define out freopen("/Users/harshanand/Desktop/C++ file/output.txt", "w", stdout);

#define Fn(name,low,upper) for(int name=low; name>upper ; name--)
#define Fe(name,low,upper) for(int name=low; name<=upper ; name++)
bool comp(string a, string b) {
	if (a.size() != b.size()) return a.size() < b.size();
	return a < b;
}


int main() {
	int t;
	cin>> t;
	while (t--){
		string s;
		cin>> s;
		if (s.size()>10){
			cout<<s[0]<<s.size()-2<<s[s.size()-1]<<"\n";
		}
		else
			cout<< s<<"\n";

	}
	return 0;
}
