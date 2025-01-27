//
//  main.cpp
//  end sem prepration
//
//  Created by Harsh Anand on 04/08/2023.
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


bool check( int n){
	for (int i=2; i<n; ++i) {
		if (n%i==0) {
			return false;
		}
	}
	return true;
}


void prime( void){
	cout<<"hello";
	vector<int> v;

	for (int i=2; i<=100; ++i){
		if(check(i)){
			v.push_back(i);
		}
		else
			continue;
	}

	for(auto x:v){
		cout<<x<<" ";
	}

	cout<<"\n";
}



int main(int argc, char const *argv[])
{
	prime();
	return 0;
}
