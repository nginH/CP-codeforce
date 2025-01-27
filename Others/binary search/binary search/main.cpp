
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


	//rigt  mid  left //

	// key
void solve( int *arr,int left ,int mid ,int right, int key,int x ){
		//base case
	if ( key== arr[mid]){
		yes;
		return;
	}
	if ( abs(left-right)==0 || abs(left-right)==1){
		no;
		return;
	}
	else if(key > arr[mid]){
		solve(arr, left, (left+1+mid)/2, (1+mid), key,++x);

	}else if (key<arr[mid]){
		solve(arr, abs(1-mid),(abs(1-mid)+ mid)/2, right, key,++x);
	}
}


int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif

	int test;
	cin>> test;
	while (test--) {
		int a, key;
		cin>>a>> key;
		int b[a];
		for(int i=0; i<a; ++i){
			cin>>b[i];
		}
		solve(b,a, a/2, 0, key,0);

	}

	return 0;
}


