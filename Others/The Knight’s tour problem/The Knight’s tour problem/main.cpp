//
//  main.cpp
//  The Knight’s tour problem
//
//  Created by Harsh Anand on 15/07/2023.
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

#define n 8

bool safe(int x , int y){
	if ( x<n && y<n ) {
		return true;
	}else
		return false;
}



bool solve(int board[n][n], int x, int y){
	int sum=0;
	for (int i=0; i<n; ++i) {
		for (int j=0; j<n; ++j) {
			sum+=board[i][j];
			//cout<< sum <<" ";
		}
	}
	if (sum== 10) {
		for (int i=0; i<n; ++i) {
			for (int j=0; j<n; ++j) {
				cout<<board[i][j]<<" ";
			}
			br;
		}
		return true;
	}
   // br br br

		if (safe( x, y)) {

			if (board[x][y]>0) {
				return false;
			}
			board[x][y]++;
			if (solve(board, x+2, y+1)) {
				return true;
			}
			if (solve(board, x+1, y+2)) {
				return true;
			}
            if (solve(board, x-1, y+2)) {
				return true;
			}
			if (solve(board, x+2, y-1)) {
				return true;
			}




			board[x][y]--;

			return false;

		}

	return false;

}

int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif

	int board[n][n];


	for (int i=0; i<n; ++i) {
		for (int j=0; j<n ; ++j) {
			board[i][j]=0;
		}
	}
	//solve(board, 0, 0);

	br;
}


