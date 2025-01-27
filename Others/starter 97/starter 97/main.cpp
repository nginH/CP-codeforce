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
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;
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




int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif
	int t;
	cin>>t;

	while(t--){
		int x;
		cin>>x;
		std::string str ;
		int count=0;
			//	int count2=0;
		cin>>str;

		vector<char> pt;

		auto ip = std::unique(str.begin(), str.begin()+ x);

		str.resize(std::distance(str.begin(), ip));

		for (ip = str.begin(); ip != str.end(); ++ip) {
				//cout << *ip << " ";
			pt.push_back(*ip);
		}
		pt.push_back(' ');
		pt.push_back(' ');
		pt.push_back(' ');
		pt.push_back(' ');
		for (int i=0; i<pt.size() ; i++) {
			if(str[i]==':' && pt[i+1]==')' && pt[i+2]==':') {
				count++;
			}
				//cout<<pt[i];
		}

		cout<< count;
		br;

	}

	return 0;
}

