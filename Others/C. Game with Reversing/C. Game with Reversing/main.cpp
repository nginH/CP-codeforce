//
//  main.cpp
//  C. Game with Reversing
//
//  Created by Harsh Anand on 22/06/2023.
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

#define inout freopen("/Users/harshanand/Desktop/input.txt","r",stdin); freopen("/Users/harshanand/Desktop/output.txt", "w", stdout);

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define br cout<< "\n"; //yey html

void solve(int a,string s1 , string s2){
		// write ur shitty code here
	int count=0;

	//reverse(s2.begin(),s2.end());
	for (int i=0; i<a; ++i) {

		if (s1==s2){
			break;
		}

		if( i%2==0){
			if (s1[i]==s2[i]){
				continue;
			}
			else
				s1[i]=s2[i];
			    count++;
		}
		else {
			reverse(s2.begin(), s2.end());
			count++;
		}

	}



	debug(count);



	return;
}




int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif

	int test;
	cin>> test;
	while (test--) {
		int a;
		cin>>a;
		string s1, s2;

		cin>>s1;

			cin>>s2;


		//cout<< s1<<" "<< s2<<"\n";
		solve(a, s1,s2);





	}

	return 0;
}


