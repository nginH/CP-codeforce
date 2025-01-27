	//
	//  main.cpp
	//  A. Anton and Polyhedrons
	//
	//  Created by Harsh Anand on 23/06/2023.
	//  https://codeforces.com/problemset/problem/785/A

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
	
	
	
	int test;
	cin>> test;
	
	vector<string> v(test);
	
	unordered_map<string, long long int> m;
	
	
	for (int i=0; i<test; ++i) {
		cin>>v[i];
		m[v[i]]++;
	}
	
	
	long long int x1= 0;
	long long int x3= 0;
	long long int x2= 0;
	long long int x4= 0;
	long long int x5 =0;

	//Tetrahedron. Tetrahedron has 4 triangular faces.
	//Cube. Cube has 6 square faces.
	//Octahedron. Octahedron has 8 triangular faces.
	//Dodecahedron. Dodecahedron has 12 pentagonal faces.
	//Icosahedron. Icosahedron has 20 triangular faces.

	x1=  m["Icosahedron"];//
	x2=  m["Dodecahedron"];//
	x3=  m["Cube"];
	x4=  m["Tetrahedron"];
	x5 = m["Octahedron"];

	cout<< x1*20+x2*12+x3*6+x4*4+x5*8;
	br;


}
