
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

	// vectors
	// oops size(x), rbegin(x), rend(x) need C++17
#define sz(x) int((x).size())
#define bg(x) begin(x)
#define all(x) bg(x), end(x)
#define rall(x) x.rbegin(), x.rend()
#define sor(x) sort(all(x))
#define rsz resize
#define ins insert
#define pb push_back
#define eb emplace_back
#define ft front()
#define bk back()

#define lb lower_bound
#define ub upper_bound
tcT > int lwb(V<T> &a, const T &b) { return int(lb(all(a), b) - bg(a)); }
tcT > int upb(V<T> &a, const T &b) { return int(ub(all(a), b) - bg(a)); }

	// loops
#define FOR(i, a, b) for (int i = (a); i < (b); ++i)
#define F0R(i, a) FOR(i, 0, a)
#define ROF(i, a, b) for (int i = (b)-1; i >= (a); --i)
#define R0F(i, a) ROF(i, 0, a)
#define rep(a) F0R(_, a)
#define each(a, x) for (auto &a : x)
#define inout freopen("/Users/harshanand/Desktop/input.txt","r",stdin);freopen("/Users/harshanand/Desktop/output.txt", "w", stdout);


#define Inf 2147483647
#define Pi acos(-1.0)
#define LL long long

#define F(i, a, b) for( int i = (a); i < (b); i++ )
#define Fs(i, sz) for( size_t i = 0; i < sz.size (); i++ )
#define Fe(it, x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++)
#define Pr(x) for(typeof (x.begin()) it = x.begin(); it != x.end (); it++) cout << *it << " "; cout << endl;
#define Set(a, s) memset(a, s, sizeof (a))
#define Rd(r) freopen(r, "r", stdin)
#define Wt(w) freopen(w, "w", stdout)

void solve(int a,int b){

	string s;
	cin>>s;

	int count=0, count2 =1;


	for (int i=a-1; i>=0; --i) {
		//printf("%c ", s[i]);
		if ( s[i]=='a' || s[i]=='e'||  s[i]=='i'||  s[i]=='o' || s[i]=='u' ){
			count++;
				for (int j=a-1; j>=0; --i) {
					if ( s[i]=='a' || s[i]=='e'||  s[i]=='i'
						|| s[i]=='o'  ||s[i]=='u' )
						break;
					else
						count2++;
			}
			if ( count2>=b){
				cout<<count2<< "YES\n";
				break;
			}
			else{
				cout<< count2<<"NO\n";
				break;
			}
		}
	}







	cout<<"\n";

}








int main(){

#ifndef ONLINE_JUDGE
	inout;
#endif

	int a;
	cin>> a;
	while(a--){
		int b,c;
		cin>>b>>c;


		solve(b,c);


		
	}
	return 0;
}
