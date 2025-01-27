//
//  main.cpp
//  radix sort
//
//  Created by Harsh Anand on 10/07/2023.
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

int getMax(int arr[], int n)
{
	int mx = arr[0];
	for (int i = 1; i < n; i++)
		if (arr[i] > mx)
			mx = arr[i];
	return mx;
}

	// A function to do counting sort of arr[]
	// according to the digit
	// represented by exp.
void countSort(int arr[], int n, int exp)
{

		// Output array
	int output[n];
	int i, count[10] = { 0 };

		// Store count of occurrences
		// in count[]
	for (i = 0; i < n; i++)
		count[(arr[i] / exp) % 10]++;

		// Change count[i] so that count[i]
		// now contains actual position
		// of this digit in output[]
	for (i = 1; i < 10; i++)
		count[i] += count[i - 1];

		// Build the output array
	for (i = n - 1; i >= 0; i--) {
		output[count[(arr[i] / exp) % 10] - 1] = arr[i];
		count[(arr[i] / exp) % 10]--;
	}

		// Copy the output array to arr[],
		// so that arr[] now contains sorted
		// numbers according to current digit
	for (i = 0; i < n; i++)
		arr[i] = output[i];
}

	// The main function to that sorts arr[]
	// of size n using Radix Sort
void radixsort(int arr[], int n)
{

		// Find the maximum number to
		// know number of digits
	int m = getMax(arr, n);

		// Do counting sort for every digit.
		// Note that instead of passing digit
		// number, exp is passed. exp is 10^i
		// where i is current digit number
	for (int exp = 1; m / exp > 0; exp *= 10)
		countSort(arr, n, exp);
}

	// A utility function to print an array
void print(int arr[], int n)
{
	for (int i = 0; i < n; i++)
		cout << arr[i] << " ";

	br;
}

	// Driver Code
int main()
{
#ifndef ONLINE_JUDGE
	inout;
#endif


	int arr[5];
	int n=5;
	for (int i=0 ;i<5;++i) {
		cin>>arr[i];
	}

	radixsort(arr, n);
	print(arr, n);
	return 0;
}
