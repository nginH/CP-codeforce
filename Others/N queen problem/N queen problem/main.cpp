//
//  main.cpp
//  N queen problem
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
#define n 4

bool safe(int board[n][n], int row , int col){

	int i,j;
// check row;;
	for (i=0; i<col; ++i) {
		if(board[row][i])
			return false;
	}

// upper diagonal

	for (i=row, j=col; i>=0&& j>=0; --i, --j) {
		if(board[i][j]){
			return false;
		}
	}

// lower diagonal
	for (i=row, j=col; i<n&& j>=0; ++i, --j) {
		if(board[i][j]){
			return false;
		}
	}
	return true;
}



bool solve( int board[n][n] , int row){

	if (row==n) {
		return true;
	}

	for (int i=0; i<n; ++i) {
		if (safe(board, i, row)) {
			board[i][row]=1;
			if (solve(board, row+1)) {
				return true;
			}
			board[i][row]=0;
		}
	}

	return false;
}


int main(void){

	clock_t s,e;
	float f;

	s= clock();

	int board[n][n];

	for (int i=0; i<n; ++i) {
		for (int j=0; j<n; ++j){
			board[i][j]=0;
		}
	}
	if(!solve(board, 0)){
		cout<<"sol not exist "<<"\n";
	}else
		for (int i=0; i<n; ++i) {
			cout<<"\t\t";
			for (int j=0; j<n; ++j){
				cout<<board[i][j]<<" ";
			}
			br;
	}


	br br
	e=clock();
	f=((float)(e-s)/1000000);
	cout<< "time taken to excute "<<f<<" sec\n";
	br

	return 0;
}
