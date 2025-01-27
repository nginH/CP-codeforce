	//
	//  main.cpp
	//  Created by Harsh Anand on 18/06/2023.
	// topic =A. Sushi for Two
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

#define Rd(r) freopen(r, "r", stdin)
#define Wt(w) freopen(w, "w", stdout)

#define Inf 2147483647
#define Pi acos(-1.0)

#define inout\
 freopen("/Users/harshanand/Desktop/input.txt","r",stdin);\
 freopen("/Users/harshanand/Desktop/output.txt", "w", stdout);


#define fn(name,upper)\
for(int name=0; name<upper ; ++name)
#define fe(name,low,upper)\
for(int name=low; name<=upper ; ++name)
#define s_array2D(name_of_array,row, col )\
fn(i, 0, row){\
fn(j, 0,col){ \
scanf("%d", &name_of_array[i][j]);\
}\
}

#define p_array2D(name_of_array,row, col )\
fn(i, 0, row){\
fn(j, 0,col){\
printf("%d \t", name_of_array[i][j]);\
}printf("\n");\
}

#define S_array1D(name,row)\
fn(i,0,row){ \
scanf("%d", &name[i]);\
}

#define p_array1D(name,row)\
fn(i,0,row){ \
printf("%d\t", name[i]);\
}

#define  ll long long
#define ld long double
#define str string
#define pi  pair <int,int >
#define pl  pair <ll,ll >
#define pd pair <ld,ld >
#define mp make_pair
#define f first
#define s second


#define tcT template <class T
#define tcTU tcT, class U

tcT > using V = vector<T>;
tcT, size_t SZ > using AR = array<T, SZ>;

using vi = V<int>;
using vb = V<bool>;
using vl = V<ll>;
using vd = V<ld>;
using vs = V<str>;
using vpi = V<pi>;
using vpl = V<pl>;
using vpd = V<pd>;

#define sz(x) x.size()
#define bg(x)  x.begin()
#define all(x) bg(x),x.end()
#define sort_all(x)  sort(all(x))
#define sort_all_rev(x)  sort(x.rbegin(), x.rend())

#define pb(x) push_back(x)

#define lb lower_bound
#define ub upper_bound

tcT > int lwb(V<T> &a, const T &b) { return int(lb(all(a), b) - bg(a)); }
tcT > int upb(V<T> &a, const T &b) { return int(ub(all(a), b) - bg(a)); }

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";


void solve(vector<int > v, int n){
		// write ur shitty code here
	int count=1, ans=0;
	int count2=1,ans2=0;
	for (int i=0; i<n-1; ++i) {
		if (v[i+1]-v[i]>=0) {
			count++;
			count2=0;
		}
		else {
			count2++;
			count=1;
		}

		ans=max(count, ans);
		ans2=max(count2, ans2);
	}
	debug_2(ans, ans2);
    ans= max(ans,ans2 );

	ans%2==0?cout<<ans<<"\n":cout<<(ans-1)<<"\n";






	return;
}




int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif
	int n;
	cin>> n;
	vi v(n);
	for (int i=0; i<n; ++i) {
		cin>>v[i];
	}


	solve(v, n);
	return 0;
}


