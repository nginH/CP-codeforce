//
//  Dynamic Range Sum Queries.cpp
//  CSES Problem Set
//
//  Created by Harsh Anand on 15/11/2023.
//

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

#ifndef ONLINE_JUDGE
#include <bits/debug.h>
#define inout  \
freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Set/input.txt", "r", stdin)  ;\
freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Set/output.txt", "w", stdout);\
freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Set/error.txt", "w", stderr) ;\
auto start = high_resolution_clock::now();

#define Time auto end = high_resolution_clock::now();\
std::chrono::duration<double> time=(end - start);\
milliseconds d = std::chrono::duration_cast<std::chrono::milliseconds>(time);\
cerr<<"\n"<<d.count()<<"ms\n";

#else
#define debug(...)
#define debug_2(x,y) cerr << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";

#endif

#define setIO                        \
ios_base::sync_with_stdio(false); \
cin.tie(nullptr);                 \
cout.tie(nullptr);


#define code by Harsh Anand
#define Inf 2147483647
#define Pi acos(-1.0)
#define no           cout<<"NO\n"
#define yes          cout<<"YES\n"
#define br           cout<< "\n"; //yey html
template <typename T> void re(T& a) {  cin >> a; }
template <typename T, typename... Args> void re(T& a, Args&... args) { cin >> a;re(args...);}
template <typename T> bool cmin(T& a, T b) { return b < a ? (a = b, true) : false; }
template <typename T> bool cmax(T& a, T b) { return b > a ? (a = b, true) : false; }

string btos( string se){
     string s= bitset<32> (se).to_string();
     return s;
}

uint64_t s_to_d( string st){
     uint64_t number;
     number = strtoull(st.c_str (),NULL,2);
     return number;
}

void String_match(string s, string match){
     for (int i=0; i<=s.size()-match.size(); ++i) {
          int j=0;
          for ( j=0; j<match.size(); ++j) {
               if (match[j]!=s[i+j]) {
                    break;
               }
          }
          if (j==match.size()) {
               cout<<"match found at index : "<< i<<"\n";
          }
     }
}
//vector<int> t(1);

struct tree {
     int data;
     tree *left, *right;

     tree(){}
     tree(tree *l ,tree *r, int val){
          left=l;
          right=r;
          data=val;
     }
};

int arr[1000000];

tree *version[1000000];

void build(tree *n, int l,int h){
     if (l==h) {
          n->data=arr[l];
          return;
     }else{
          int mid=(l+h)/2;
          n->left=new tree(NULL,NULL,0);
          n->right=new tree(NULL,NULL,0);
          build(n->left, l, mid);
          build(n->right, mid+1, h);
          n->data=n->left->data+n->right->data;
     }
}


void upgrade(tree * prev, tree *cur, int low, int high , int idx, int value ){
     if ( idx>high or idx<low or low >high){
          return;
     }
     if (high==low) {
          cur->data=value;
          return;
     }
     int mid=( low+high)/2;
     if (idx<=mid) {
          cur->right=prev->right;
          cur->left=new tree(nullptr, nullptr, 0);
          upgrade(prev->right, cur->right, mid+1, high, idx, value);
     }else{
          cur->left=prev->left;
          cur->right=new tree(nullptr, nullptr, 0);
          upgrade(prev->left, cur->left, mid+1, high, idx, value);
     }
}






void solve(void){

     int siz, tc;
     re(siz,tc);

     int v[siz];
     for (int i=0; i<siz; ++i) {
          cin>>v[i];
     }


     while (tc--) {
          int a ,b,c;
          re(a,b,c);
     }




     return;
}


int main(){
     setIO;
     inout;

     int testcase=1;
          //     read(testcase);
     while (testcase--) {
          solve();
     }

     Time;
     return 0;
}












     // To: MoM & DaD
     // One day.. i'll make you proud;






