//
//  main.cpp
//  rat in maze
//
//  Created by Harsh Anand on 12/07/2023.
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

#define inout freopen("/Users/harshanand/Desktop/input.txt","r",stdin);
	// freopen("/Users/harshanand/Desktop/output.txt", "w", stdout);

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n";
#define yes cout<<"YES\n"
#define br cout<< "\n"; //yey html
#define n 4





// safe fxn

bool safe ( int maze[n][n], int x, int y){

	if (maze[x][y]==1 && x<n && y<n) {
		return true;
	} else {
		return false;
	}
}




bool solve( int maze[n][n], int x , int y , int & sol[n][n]){


	if (maze[x][y]==1 && x== n-1 && y== n-1 ) {
		sol[x][y]=1;

		for (int i=0; i<n; ++i) {
			for (int j=0; j<n; ++j) {
				cout<<sol[i][j]<< " ";
			}
			br;
		}

		br br br
		return true;
	}
	if (safe(maze, x, y) == true) {

		if (sol[x][y]==1){
			//sol[x][y]=1;
			return false;
		}

		sol[x][y]=1;
		if (solve(maze, x+1, y, sol) ) {
			return true;
		}
    	if (solve(maze, x, y+1, sol)) {
			return true;
		}


		if (solve(maze, x-1, y, sol) ) {
			return true;
		}
    	if (solve(maze, x, y-1, sol)) {
			return true;
		}


		sol[x][y]=0;
		return false;
	}
	return false;
}




int main(void){

#ifndef ONLINE_JUDGE
	inout;
#endif

	int maze[n][n];
//
	for (int i=0; i<n; ++i) {
		for (int j=0; j<n; ++j) {
			cin>>maze[i][j];
		}
	}


	// sol array

	int sol[n][n];
	for (int i=0; i<n; ++i) {
		for (int j=0; j<n; ++j) {
			sol[i][j]=0;
		}
	}


	solve(maze, 0, 0, sol);


	for (int i=0; i<n; ++i) {
		for (int j=0; j<n; ++j) {
			cout<<sol[i][j];
		}
	}



	return 0;
}


