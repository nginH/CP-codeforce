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
#include <iostream>
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

const int MOD = 998244353;  // 1e9+7;
const int MX = (int)2e5 + 5;
const ll BIG = 1e18;  // not too close to LLONG_MAX
const db PI = acos((db)-1);
const int dx[4]{1, 0, -1, 0}, dy[4]{0, 1, 0, -1};  // for every grid problem!!
mt19937 rng(0);
template <class T> using pqg = priority_queue<T, vector<T>, greater<T>>;

// bitwise ops
// also see https://gcc.gnu.org/onlinedocs/gcc/Other-Builtins.html
constexpr int pct(int x) { return __builtin_popcount(x); }  // # of bits set
constexpr int bits(int x) {  // assert(x >= 0); // make C++11 compatible until
     // USACO updates ...
     return x == 0 ? 0 : 31 - __builtin_clz(x);
}  // floor(log2(x))
constexpr int p2(int x) { return 1 << x; }
constexpr int msk2(int x) { return p2(x) - 1; }

ll cdiv(ll a, ll b) {
     return a / b + ((a ^ b) > 0 && a % b);
}  // divide a by b rounded up
ll fdiv(ll a, ll b) {
     return a / b - ((a ^ b) < 0 && a % b);
}  // divide a by b rounded down

tcT > bool ckmin(T &a, const T &b) {
     return b < a ? a = b, 1 : 0;
}  // set a = min(a,b)
tcT > bool ckmax(T &a, const T &b) {
     return a < b ? a = b, 1 : 0;
}  // set a = max(a,b)

tcTU > T fstTrue(T lo, T hi, U f) {
     ++hi;
     assert(lo <= hi);  // assuming f is increasing
     while (lo < hi) {  // find first index such that f is true
          T mid = lo + (hi - lo) / 2;
          f(mid) ? hi = mid : lo = mid + 1;
     }
     return lo;
}
tcTU > T lstTrue(T lo, T hi, U f) {
     --lo;
     assert(lo <= hi);  // assuming f is decreasing
     while (lo < hi) {  // find first index such that f is true
          T mid = lo + (hi - lo + 1) / 2;
          f(mid) ? lo = mid : hi = mid - 1;
     }
     return lo;
}
tcT > void remDup(vector<T> &v) {  // sort and remove duplicates
     sort(all(v));
     v.erase(unique(all(v)), end(v));
}
tcTU > void safeErase(T &t, const U &u) {
     auto it = t.find(u);
     assert(it != end(t));
     t.erase(it);
}

inline namespace IO {
#define SFINAE(x, ...)                                                         \
	template <class, class = void> struct x : std::false_type {};              \
	template <class T> struct x<T, std::void_t<__VA_ARGS__>> : std::true_type {}

SFINAE(DefaultI, decltype(std::cin >> std::declval<T &>()));
SFINAE(DefaultO, decltype(std::cout << std::declval<T &>()));
SFINAE(IsTuple, typename std::tuple_size<T>::type);
SFINAE(Iterable, decltype(std::begin(std::declval<T>())));

template <auto &is> struct Reader {
     template <class T> void Impl(T &t) {
          if constexpr (DefaultI<T>::value) is >> t;
          else if constexpr (Iterable<T>::value) {
               for (auto &x : t) Impl(x);
          } else if constexpr (IsTuple<T>::value) {
               std::apply([this](auto &...args) { (Impl(args), ...); }, t);
          } else static_assert(IsTuple<T>::value, "No matching type for read");
     }
     template <class... Ts> void read(Ts &...ts) { ((Impl(ts)), ...); }
};

template <class... Ts> void re(Ts &...ts) { Reader<cin>{}.read(ts...); }
#define def(t, args...)                                                        \
	t args;                                                                    \
	re(args);

template <auto &os, bool debug, bool print_nd> struct Writer {
     string comma() const { return debug ? "," : ""; }
     template <class T> constexpr char Space(const T &) const {
          return print_nd && (Iterable<T>::value or IsTuple<T>::value) ? '\n'
                                                                       : ' ';
     }
     template <class T> void Impl(T const &t) const {
          if constexpr (DefaultO<T>::value) os << t;
          else if constexpr (Iterable<T>::value) {
               if (debug) os << '{';
               int i = 0;
               for (auto &&x : t)
                    ((i++) ? (os << comma() << Space(x), Impl(x)) : Impl(x));
               if (debug) os << '}';
          } else if constexpr (IsTuple<T>::value) {
               if (debug) os << '(';
               std::apply(
                    [this](auto const &...args) {
                         int i = 0;
                         (((i++) ? (os << comma() << " ", Impl(args)) : Impl(args)),
                              ...);
                    },
                    t);
               if (debug) os << ')';
          } else static_assert(IsTuple<T>::value, "No matching type for print");
     }
     template <class T> void ImplWrapper(T const &t) const {
          if (debug) os << "\033[0;31m";
          Impl(t);
          if (debug) os << "\033[0m";
     }
     template <class... Ts> void print(Ts const &...ts) const {
          ((Impl(ts)), ...);
     }
     template <class F, class... Ts>
     void print_with_sep(const std::string &sep, F const &f,
                         Ts const &...ts) const {
          ImplWrapper(f), ((os << sep, ImplWrapper(ts)), ...), os << '\n';
     }
     void print_with_sep(const std::string &) const { os << '\n'; }
};

template <class... Ts> void pr(Ts const &...ts) {
     Writer<cout, false, true>{}.print(ts...);
}
template <class... Ts> void ps(Ts const &...ts) {
     Writer<cout, false, true>{}.print_with_sep(" ", ts...);
}
}  // namespace IO

inline namespace Debug {
   template <typename... Args> void err(Args... args) {
        Writer<cerr, true, false>{}.print_with_sep(" | ", args...);
   }
   template <typename... Args> void errn(Args... args) {
        Writer<cerr, true, true>{}.print_with_sep(" | ", args...);
   }

   void err_prefix(str func, int line, string args) {
        cerr << "\033[0;31m\u001b[1mDEBUG\033[0m"
             << " | "
             << "\u001b[34m" << func << "\033[0m"
             << ":"
             << "\u001b[34m" << line << "\033[0m"
             << " - "
             << "[" << args << "] = ";
   }

#ifdef LOCAL
   #define dbg(args...) err_prefix(__FUNCTION__, __LINE__, #args), err(args)
#define dbgn(args...) err_prefix(__FUNCTION__, __LINE__, #args), errn(args)
#else
#define dbg(...)
#define dbgn(args...)
#endif

   const auto beg_time = std::chrono::high_resolution_clock::now();
// https://stackoverflow.com/questions/47980498/accurate-c-c-clock-on-a-multi-core-processor-with-auto-overclock?noredirect=1&lq=1
   double time_elapsed() {
        return chrono::duration<double>(std::chrono::high_resolution_clock::now() -
                                        beg_time)
             .count();
   }
}  // namespace Debug

inline namespace FileIO {
   void setIn(str s) { freopen(s.c_str(), "r", stdin); }
   void setOut(str s) { freopen(s.c_str(), "w", stdout); }
   void setIO(str s = "") {
        cin.tie(0)->sync_with_stdio(0);  // unsync C / C++ I/O streams
        cout << fixed << setprecision(12);
// cin.exceptions(cin.failbit);
// throws exception when do smth illegal
// ex. try to read letter into int
        if (sz(s)) setIn(s + ".in"), setOut(s + ".out");  // for old USACO
   }
}  // namespace FileIO

// make sure to intialize ALL GLOBAL VARS between tcs!

/**
 * Description: Generate various types of trees.
 * Source: Own + Dhruv Rohatgi
 */

////////////// DISTRIBUTIONS

// return int in [L,R] inclusive
int rng_int(int L, int R) {
     assert(L <= R);
     return uniform_int_distribution<int>(L, R)(rng);
}
ll rng_ll(ll L, ll R) {
     assert(L <= R);
     return uniform_int_distribution<ll>(L, R)(rng);
}

// return double in [L,R] inclusive
db rng_db(db L, db R) {
     assert(L <= R);
     return uniform_real_distribution<db>(L, R)(rng);
}

// http://cplusplus.com/reference/random/geometric_distribution/geometric_distribution/
// flip a coin which is heads with probability p until you flip heads
// mean value of c is 1/p-1
int rng_geo(db p) {
     assert(0 < p && p <= 1);  // p large -> closer to 0
     return geometric_distribution<int>(p)(rng);
}

////////////// VECTORS + PERMS

// shuffle a vector
template <class T> void shuf(vector<T> &v) { shuffle(all(v), rng); }

// generate random permutation of [0,N-1]
vi randPerm(int N) {
     vi v(N);
     iota(all(v), 0);
     shuf(v);
     return v;
}

// random permutation of [0,N-1] with first element 0
vi randPermZero(int N) {
     vi v(N - 1);
     iota(all(v), 1);
     shuf(v);
     v.ins(bg(v), 0);
     return v;
}

// shuffle permutation of [0,N-1]
vi shufPerm(vi v) {
     int N = sz(v);
     vi key = randPerm(N);
     vi res(N);
     F0R(i, N) res[key[i]] = key[v[i]];
     return res;
}

// vector with all entries in [L,R]
vi rng_vec(int N, int L, int R) {
     vi res;
     F0R(_, N) res.pb(rng_int(L, R));
     return res;
}

// vector with all entries in [L,R], unique
vi rng_vec_unique(int N, int L, int R) {
     set<int> so_far;
     vi res;
     F0R(_, N) {
          int x;
          do { x = rng_int(L, R); } while (so_far.count(x));
          so_far.ins(x);
          res.pb(x);
     }
     return res;
}

////////////// GRAPHS

// relabel edges ed according to perm, shuffle
vpi relabelAndShuffle(vpi ed, vi perm) {
     each(t, ed) {
          t.f = perm[t.f], t.s = perm[t.s];
          if (rng() & 1) swap(t.f, t.s);
     }
     shuf(ed);
     return ed;
}

// shuffle graph with vertices [0,N-1]
vpi shufGraph(int N, vpi ed) {  // randomly swap endpoints, rearrange labels
     return relabelAndShuffle(ed, randPerm(N));
}
vpi shufGraphZero(int N, vpi ed) {
     return relabelAndShuffle(ed, randPermZero(N));
}

// shuffle tree given N-1 edges
vpi shufTree(vpi ed) { return shufGraph(sz(ed) + 1, ed); }
// randomly swap endpoints, rearrange labels
vpi shufRootedTree(vpi ed) {
     return relabelAndShuffle(ed, randPermZero(sz(ed) + 1));
}

void pgraphOne(int N, vpi ed) {
     ps(N, sz(ed));
     each(e, ed) ps(1 + e.f, 1 + e.s);
}

////////////// GENERATING TREES

// for generating tall tree
pi geoEdge(int i, db p) {
     assert(i > 0);
     return {i, max(0, i - 1 - rng_geo(p))};
}

// generate edges of tree with verts [0,N-1]
// smaller back -> taller tree
vpi treeRand(int N, int back) {
     assert(N >= 1 && back >= 0);
     vpi ed;
     FOR(i, 1, N) ed.eb(i, i - 1 - rng_int(0, min(back, i - 1)));
     return ed;
}

// generate path
vpi path(int N) { return treeRand(N, 0); }

// generate tall tree (large diameter)
// the higher the p the taller the tree
vpi treeTall(int N, db p) {
     assert(N >= 1);
     vpi ed;
     FOR(i, 1, N) ed.pb(geoEdge(i, p));
     return ed;
}

// generate tall tree, then add rand at end
vpi treeTallShort(int N, db p) {
     assert(N >= 1);
     int mid = (N + 1) / 2;
     vpi ed = treeTall(mid, p);
     FOR(i, mid, N) ed.eb(i, rng_int(0, i - 1));
     return ed;
}

// lots of stuff connected to either heavy1 or heavy2
vpi treeTallHeavy(int N, db p) {
     assert(N >= 1);  // + bunch of rand
     vpi ed;
     int heavy1 = 0, heavy2 = N / 2;
     FOR(i, 1, N) {
          if (i < N / 4) ed.eb(i, heavy1);
          else if (i > heavy2 && i < 3 * N / 4) ed.eb(i, heavy2);
          else ed.pb(geoEdge(i, p));
     }
     return ed;
}

// heavy tall tree + random
// lots of verts connected to heavy1 or heavy2
vpi treeTallHeavyShort(int N, db p) {
     assert(N >= 1);  // + almost-path + rand
     vpi ed;
     int heavy1 = 0, heavy2 = N / 2;
     FOR(i, 1, N) {
          if (i < N / 4) ed.eb(i, heavy1);
          else if (i <= heavy2) ed.pb(geoEdge(i, p));  // tall -> heavy1
          else if (i > heavy2 && i < 3 * N / 4) ed.eb(i, heavy2);
          else ed.eb(i, rng_int(0, i - 1));
     }
     return ed;
}

int rand_prime(int l, int r) {
     while (1) {
          int x = rng_int(l, r);
          bool bad = 0;
          for (int i = 2; i * i <= x; ++i)
               if (x % i == 0) bad = 1;
          if (!bad) return x;
     }
}

struct Frac {
     ll n, d;
     bool operator<(const Frac &o) const { return n * o.d < o.n * d; }
     bool operator==(const Frac &o) const { return n * o.d == o.n * d; }  // OK
};

ostream &operator<<(ostream &os, const Frac &f) {
     os << "Frac(" << f.n << ", " << f.d << ")";
     return os;
}

struct RangeInfo {
     pair<int, Frac> d0, d1;
     bool single_value() const { return d1.f == INT_MAX; }
     pair<int, Frac> first_dif(Frac f) const {
          if (d0.s == f) return d1;
          return d0;
     }
     bool greater_than(Frac f) {
          auto [idx, val] = first_dif(f);
          if (idx == INT_MAX) return false;
          assert(!(f == val));
          return f < val;
     }
     bool greater_or_equal(Frac f) {
          auto [idx, val] = first_dif(f);
          if (idx == INT_MAX) return true;
          assert(!(f == val));
          return f < val;
     }
};

ostream &operator<<(ostream &os, const pair<int, Frac> &p) {
     os << "{" << p.f << ", " << p.s << "}";
     return os;
}

ostream &operator<<(ostream &os, const RangeInfo &i) {
     os << "RangeInfo{" << i.d0 << ", " << i.d1 << "}";
     return os;
}

RangeInfo operator+(RangeInfo l, RangeInfo r) {
     if (l.d0.f > r.d0.f) swap(l, r);
     assert(l.d0.f < r.d0.f);
     return RangeInfo{l.d0, min(l.d1, l.d0.s == r.d0.s ? r.d1 : r.d0)};
}

struct Info {
     int k, first_different;
     pi prev_pair;
     RangeInfo r;
};

ostream &operator<<(ostream &os, const Info &i) {
     os << "Info{" << i.k << ", " << i.first_different << ", "
        << "{" << i.prev_pair.f << ", " << i.prev_pair.s << "}"
        << ", " << i.r << "}";
     return os;
}

Info info_single(int x, int w) {
     return {0, INT_MAX, {-1, -1}, RangeInfo{{x, Frac{w, 1}}, {INT_MAX, {}}}};
}

int N, K;
V<V<Info>> dp, stor;
vi W;
V<vi> adj;
vl sum;
vi num;

void construct(int x, int p) {
     sum[x] = W[x];
     num[x] = 1;
     dp[x] = {info_single(x, W[x])};

// {{INT_MAX, RangeInfo{{x, Frac{W[x], 1}}, {INT_MAX, {}}}}};
     for (int y : adj[x])
          if (y != p) {
               construct(y, x);
               sum[x] += sum[y];
               num[x] += num[y];
               int max_ops = min(dp[x].bk.k + dp[y].bk.k, K);
               V<Info> ndp;
               F0R(ops, max_ops + 1) {  // SLOW
                    int l = 0, r = 0;
                    int last_mn = INT_MAX;
                    while (true) {
                         int mn = INT_MAX;
                         pi best;
                         FOR(i, l + 1, sz(dp[x]))
                              if (dp[x][i].k + dp[y][r].k <= ops) {
                                   if (ckmin(mn, dp[x][i].first_different)) {
                                        best = {0, i};
                                   }
                              } else break;
                         FOR(j, r + 1, sz(dp[y]))
                              if (dp[x][l].k + dp[y][j].k <= ops) {
                                   if (ckmin(mn, dp[y][j].first_different)) {
                                        best = {1, j};
                                   }
                              } else break;
                         if (mn == INT_MAX) {
                              if (dp[x][l].k + dp[y][r].k == ops) {
                                   ndp.pb({ops,
                                           last_mn,
                                           {l, r},
                                           dp[x][l].r + dp[y][r].r});
                              }
                              break;
                         } else {
                              if (best.f == 0) l = best.s;
                              else r = best.s;
                              last_mn = mn;
                         }
                    }
               }
               swap(dp[x], stor[y]);
               swap(dp[x], ndp);
          }
     Frac f{sum[x], num[x]};
     if (!dp[x][0].r.greater_than(f)) return;
     if (sz(dp[x]) > 1) {
          assert(dp[x].at(1).k == 1);
          if (!dp[x].at(1).r.greater_than(f)) return;
     }
     int idx = 1;
     while (idx < sz(dp[x]) && dp[x][idx].r.greater_or_equal(f)) ++idx;
     V<Info> ndp{dp[x][0]};
     {
          RangeInfo r{{dp[x][0].r.d0.f, f}, {INT_MAX, {}}};
          ndp.pb({1, dp[x][0].r.first_dif(f).f, {-1, -1}, r});
     }
     if (idx < sz(dp[x])) {
          FOR(i, idx, sz(dp[x])) {
               assert(!dp[x][i].r.greater_or_equal(f));
               if (i == idx) {
                    dp[x][i].first_different = dp[x][i].r.first_dif(f).f;
                    ndp.pb(dp[x][i]);
               } else {
                    ndp.pb(dp[x][i]);
               }
          }
     }
     swap(dp[x], ndp);
}

void reconstruct(vi &ans, int idx, int x, int p) {
     if (idx == 0) return;
     assert(idx < sz(dp[x]));
     auto [lhs, rhs] = dp[x].at(idx).prev_pair;
     if (lhs == -1) {
          ans.pb(x);
          return;
     }
     assert(lhs >= 0 && rhs >= 0);
     R0F(y_idx, sz(adj[x])) {
          int y = adj[x][y_idx];
          if (y == p) continue;
          assert(lhs < sz(stor[y]));
          assert(rhs < sz(dp[y]));
          reconstruct(ans, rhs, y, x);
          tie(lhs, rhs) = stor[y].at(lhs).prev_pair;
     }
     assert(lhs == -1 && rhs == -1);
}

struct NaiveSol {
     V<pair<int, Frac>> result;
     vi moves;
};

template <class T> V<T> operator+(V<T> a, V<T> b) {
     a.ins(end(a), all(b));
     return a;
}

NaiveSol operator+(NaiveSol a, NaiveSol b) {
     NaiveSol c{a.result + b.result, a.moves + b.moves};
     sor(c.result);
     return c;
}

V<NaiveSol> brute(int x, int p) {
     sum[x] = W[x];
     num[x] = 1;
     V<NaiveSol> dp;
     dp.pb({{{x, Frac{W[x], 1}}}, {}});
     for (int y : adj[x])
          if (y != p) {
               auto child_dp = brute(y, x);
               sum[x] += sum[y];
               num[x] += num[y];
               V<NaiveSol> ndp;
               F0R(i, sz(dp)) F0R(j, sz(child_dp)) if (i + j <= K) {
                              auto s = dp[i] + child_dp[j];
                              if (i + j == sz(ndp)) {
                                   ndp.pb(s);
                              } else {
                                   if (s.result < ndp.at(i + j).result) ndp.at(i + j) = s;
                              }
                         }
               swap(dp, ndp);
          }
     {
          auto result = dp.at(0).result;
          each(t, result) t.s = Frac{sum[x], num[x]};
          NaiveSol kill_sub{result, {x}};
          if (sz(dp) == 1) dp.pb(kill_sub);
          else if (kill_sub.result < dp[1].result) dp[1] = kill_sub;
     }
     return dp;
}

vi solve1(int R) {
     auto cands = brute(R, 0);
     FOR(i, 1, sz(cands)) if (cands[i].result < cands[0].result) {
               cands[0] = cands[i];
          }
     vi ans = cands[0].moves;
     return ans;
}

vi solve2(int R) {
     construct(R, 0);
     int k = dp[R].bk.k;
     vi ans;
     reconstruct(ans, sz(dp[R]) - 1, R, 0);
     assert(sz(ans) == k);
     return ans;
}

/**
 * Description: wraps a lambda so it can call itself
 * Source: http://www.open-std.org/jtc1/sc22/wg21/docs/papers/2016/p0200r0.html
 */

namespace std {

   template <class Fun> class y_combinator_result {
       Fun fun_;

        public:
       template <class T>
       explicit y_combinator_result(T &&fun) : fun_(std::forward<T>(fun)) {}

       template <class... Args> decltype(auto) operator()(Args &&...args) {
            return fun_(std::ref(*this), std::forward<Args>(args)...);
       }
   };

   template <class Fun> decltype(auto) y_combinator(Fun &&fun) {
   return y_combinator_result<std::decay_t<Fun>>(std::forward<Fun>(fun));
}

}  // namespace std

void y_comb_demo() {
     cout << y_combinator([](auto gcd, int a, int b) -> int {
          return b == 0 ? a : gcd(b, a % b);
     })(20, 30)
          << "\n";  // outputs 10
}

V<Frac> eval(int R, vi v) {
     V<Frac> res(N + 1);
// dbg("EVAL", R, v);
     y_combinator([&](auto dfs_set, int x, int p, Frac val) -> void {
          if (!val.d) {
               if (find(all(v), x) != end(v)) val = Frac{sum[x], num[x]};
          }
// dbg("AT", x, p, val);
          if (val.d) {
               res[x] = val;
          } else {
               res[x] = Frac{W[x], 1};
          }
          for (int y : adj[x])
               if (y != p) dfs_set(y, x, val);
     })(R, 0, Frac{});
     return res;
}

void solve(int tc, bool gen = true) {
// dbg("DOING", tc);
     int R;
     if (gen) {
          N = 6;
// N = rng_int(2, 5);
          R = rng_int(1, N);
          K = rng_int(0, N);
     } else {
          re(N, R, K);
     }
     W.rsz(N + 1);
     int mx = rng_int(1, 10);
     FOR(i, 1, N + 1) {
          if (gen) {
               W[i] = rng_int(1, mx);
          } else re(W[i]);
     }
     adj = V<vi>(N + 1);
     FOR(i, 2, N + 1) {
          if (gen) {
               int u = rng_int(1, i - 1), v = i;
               adj[u].pb(v), adj[v].pb(u);
          } else {
               def(int, u, v);
               adj[u].pb(v), adj[v].pb(u);
          }
     }
// dbg(tc);
// if (tc == 47336) { dbg(N, R, K, W, adj); }
     dp = {};
     dp.rsz(N + 1);
     stor = {};
     stor.rsz(N + 1);
     sum = vl(N + 1);
     num = vi(N + 1);

// vi ans = solve1(R);
     vi ans = solve2(R);
// ps(eval(R, ans));
// if (!gen) {
     ps(sz(ans));
     ps(ans);
// } else {
// 	if (eval(R, ans) != eval(R, ans2)) {
// 		dbg("WHOOPS", tc, N, R, K, W, adj);
// 		dbg(ans, eval(R, ans));
// 		dbg(ans2, eval(R, ans2));
// 		FOR(i, 1, N + 1) dbg(i, dp[i]);
// 		exit(0);
// 	}
// }
}

int main() {
     setIO();
// RangeInfo r1{{1, Frac{2, 5}}, {2, Frac{2, 7}}};
// RangeInfo r2{{3, Frac{2, 6}}, {4, Frac{2, 3}}};
// auto r3 = r1 + r2;
// dbg(r3.d0.f, r3.d1.f);
// exit(0);

// RangeInfo{{x, Frac{w, 1}}, {INT_MAX, {}}}
// ps(Frac{1, 2} < Frac{2, 4});
// ps(Frac{2, 4} < Frac{1, 2});
// ps(Frac{1, 2} < Frac{2, 3});
// exit(0);
     int TC;
     re(TC);
     FOR(i, 1, TC + 1) solve(i, false);
}

/* stuff you should look for
 * int overflow, array bounds
 * special cases (n=1?)
 * do smth instead of nothing and stay organized
 * WRITE STUFF DOWN
 * DON'T GET STUCK ON ONE APPROACH
 */