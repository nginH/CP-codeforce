//
//  main.cpp
//  String Hashing
//
//  Created by Harsh Anand on 16/07/2023.
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

#define inout freopen("/Users/harshanand/Desktop/input.txt","r",stdin); //freopen("/Users/harshanand/Desktop/output.txt", "w", stdout);

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n";
#define yes cout<<"YES\n";
#define br cout<< "\n"; //yey html

#include<iostream>
#include<vector>
using namespace std;

void setvector(vector<int> v){
	for(int i=0 ; i<v.size() ; i++){
		cin >> v[i] ;
	}
	cout << endl;
}

vector<int> reverse(vector<int> v)
{
	int start = 0;
	int end = v.size() - 1;
	while (start < end)
		{
		swap(v[start++] , v[end--]);

		}
	return v;
}

vector<int> sumofTWOarrays(vector<int> a , vector<int> b, int i, int  j){

	i-=1;
	j-=1;
	int carry = 0;
	vector<int> ans;
	while(i >= 0 && j >= 0)
		{
		int sum;
		sum = a[i] + b[j] + carry;
		carry = sum/10 ;
		sum = sum % 10;
		ans.push_back(sum);
		i--;
		j--;
		}
		//first case b is small
	while(i >= 0){
		int sum;
		sum = a[i] + carry;
		carry = sum/10 ;
		sum = sum % 10;
		ans.push_back(sum);
		i--;

		}
		//2nd case a is small
	while(j >= 0)
		{
		int sum;
		sum = b[j] + carry;
		carry = sum/10 ;
		sum = sum % 10;
		ans.push_back(sum);
		j--;

		}

	while(carry != 0)
		{
		int sum;
		sum =  carry;
		carry = sum/10 ;
		sum = sum % 10;
		ans.push_back(sum);
		}

	return reverse(ans);
}


int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif

	int m ,n ;
	//cout << "Enter the size of arrays: ";
	cin >> m >> n;

	vector<int> a(m);

	vector<int> b(n);

	setvector(a);
	setvector(b);

	vector<int> ans(m+n);
	ans = sumofTWOarrays(a , b, m,n);
	for(int i=0 ; i<ans.size() ; i++){
		cout << ans[i] << " ";
	}


	return 0;
}
