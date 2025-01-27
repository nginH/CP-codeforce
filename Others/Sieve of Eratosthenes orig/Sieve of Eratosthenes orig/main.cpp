//
//  main.cpp
//  Sieve of Eratosthenes orig
//
//  Created by Harsh Anand on 11/06/2023.
//


#include <iostream>
#include <algorithm>

using namespace std;

int  solve(int n){
	int  arr[1000]={0};
	for (int i=2; i<=n; i++) {
		if (arr[i]==false){
			for (int j=i*i; j<=n; j+=i) {
				arr[j]=true;
			}
		}
	}
	
	for (int i=2; i<=n; i++) {
		if (arr[i]==0) {
			cout<<i<<" ";
		}
	}


	return 0;
}



int main(void){

	
	int n=1000;
	solve(n);



	return 0;
}
