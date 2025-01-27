//
//  main.cpp
//  E. The Holmes Children
//
//  Created by Harsh Anand on 10/06/2023.
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

using ll = long long;
using db = long double;  // or double, if TL is tight

#define mp make_pair
#define f first
#define s second

#define inout freopen("/Users/harshanand/Desktop/input.txt","r",stdin);freopen("/Users/harshanand/Desktop/output.txt", "w", stdout);

	// loops
#define Fn(name,low,upper) for(int name=low; name<upper ; name++)
#define F(name,low,upper) for(int name=low; name<=upper ; name++)

#define Inf 2147483647
#define Pi acos(-1.0)
#define LL long long
#define Rd(r) freopen(r, "r", stdin)
#define Wt(w) freopen(w, "w", stdout)

using namespace std;
int  solve(int n){

		// write your shitty code hare

	int i=2;
	int arr[100],count=0,d=0;
	int temp= n;
	float out=1;
	while (n!=1) {
		if(n%i==0){
			count++;
			n/=i;
			if (count==1) {
				arr[d]=i;
				d++;
			}
		}
		else{
			count=0;
			i++;
		}
	}

	int ans=1;

	if(arr[0]==temp){
		ans=arr[0]-1;
	}
	else if (( arr[0]*arr[1]) ==temp)
		ans=(arr[0]-1)*(arr[1]-1);
	else if (( arr[0]*arr[1]) !=n){
		Fn(i, 0, d){
			out= out*(1-(float)1/arr[i]);
		}
		int out2=(int)temp*out;
		ans=out2;
	}
	return ans;
}
int main(void){

#ifndef ONLINE_JUDGE
	inout;
#endif
	int testcase;
	int a;
	cin>>a>>testcase;
	testcase = (testcase+1)/2;
	while (testcase--) {
		a=solve(a);
		if (a==1)
			break;
	}
	cout<<a%1000000007<<"\n";
}



