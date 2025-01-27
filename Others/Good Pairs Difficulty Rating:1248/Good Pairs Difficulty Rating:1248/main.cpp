//
//  main.cpp
//  Good Pairs Difficulty Rating:1248
//
//  Created by Harsh Anand on 14/06/2023.
//https://www.codechef.com/problems/EQPAIR

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
using str = string;      // yay python!

	// pairs
using pi = pair<int, int>;
using pl = pair<ll, ll>;
using pd = pair<db, db>;
#define mp make_pair
#define f first
#define s second

#define tcT template <class T
#define tcTU tcT, class U
	// ^ lol this makes everything look weird but I'll try it
tcT > using V = vector<T>;
tcT, size_t SZ > using AR = array<T, SZ>;
using vi = V<int>;
using vb = V<bool>;
using vl = V<ll>;
using vd = V<db>;
using vs = V<str>;
using vpi = V<pi>;
using vpl = V<pl>;
using vpd = V<pd>;

	//vector//
#define sor(x) sort(v.begin(), v.end())
#define sor_rev(x) sort(v.rbegin(), v.rend())
#define pb push_back
#define ft front()
#define bk back()
#define sz(x) int ((x).size())


#define lb lower_bound
#define ub upper_bound
tcT > int lwb(V<T> &a, const T &b) { return int(lb(all(a), b) - bg(a)); }
tcT > int upb(V<T> &a, const T &b) { return int(ub(all(a), b) - bg(a)); }

	// loops

#define Fn(name,low,upper) for(int name=low; name<upper ; name++)
#define F(name,low,upper) for(int name=low; name<=upper ; name++)

#define Inf 2147483647
#define Pi acos(-1.0)
#define LL long long


#define Fs(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Fe(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Pr(x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++) cout << *it << " "; cout << endl;
#define Set(a, s) memset(a, s, sizeof (a))
#define Rd(r) freopen(r, "r", stdin)
#define Wt(w) freopen(w, "w", stdout)

#define inout freopen("/Users/harshanand/Desktop/input.txt","r",stdin);\
freopen("/Users/harshanand/Desktop/output.txt", "w", stdout);

#define s1d(base_add, size) for (int i=0; i<size; ++i){cin>>base_add[i];}
#define p1d(base_add, size) for (int i=0; i<size; ++i){\
cout<<base_add[i];\
}


void solve( int n) {
		// Create a set to store the unique elements in the array.


	vi v(n);

	unordered_map<int, int > m;

	for (int i=0; i<n; ++i) {
		cin>>v[i];
		m[v[i]]++;
	}
	long long ans=0;

	for( auto p : m){
		int freq= p.second;

		ans= ans+ freq*(freq-1)/2;


	}
	cout<<ans<<"\n";
}




int main(){
#ifndef ONLINE_JUDGE
	inout;
#endif

	int test;
	cin>>test;

	while (test--) {
		int a;
		cin>>a;
		solve (a);

	}




	return 0;
}
