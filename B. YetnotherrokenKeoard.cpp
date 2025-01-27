//
//  B. YetnotherrokenKeoard.cpp
//  CODEFORCE's
//
//  Created by Harsh Anand on 20/12/2023.
//https://codeforces.com/problemset/problem/1907/B

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using namespace chrono;

#ifndef ONLINE_JUDGE

#include <bits/debug.h>
#define inout  freopen("/Users/harshanand/Desktop/C++ file/CODEFORCE's/CODEFORCE's/file/input.txt", "r", stdin) ; freopen("/Users/harshanand/Desktop/C++ file/CODEFORCE's/CODEFORCE's/file/output.txt", "w", stdout); freopen("/Users/harshanand/Desktop/C++ file/CODEFORCE's/CODEFORCE's/error.txt", "w", stderr) ;auto start = high_resolution_clock::now();

#define Time auto end = high_resolution_clock::now();\
std::chrono::duration<double> time=(end - start);\
milliseconds d = std::chrono::duration_cast<std::chrono::milliseconds>(time);\
cerr<<"\n"<<d.count()<<"ms\n";

#else
#define inout;
#define Time;
#define dbg(...)
#define debug_2(x,y) cerr << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";

#endif

#define setIO                        \
ios_base::sync_with_stdio(false);    \
cin.tie(nullptr);                    \
cout.tie(nullptr);


#define code by Harsh Anand
#define Inf 2147483647
#define Pi acos(-1.0)
#define no           cout<<"NO\n"
#define yes          cout<<"YES\n"
#define br           cout<< "\n"; //yey html
template <typename T> void rd(T& a) {  cin >> a; }
template <typename T, typename... Args> void rd(T& a, Args&... args) { cin >> a;rd(args...);}
template <typename T> bool cmin(T& a, T b) { return b < a && (a = b, true); }
template <typename T> bool cmax(T& a, T b) { return b > a && (a = b, true); }

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

struct node{
   char data;
     struct node *next;
     node(int x){
          this->data=x;
          this->next=NULL;
     }
}*head, *tail;
void push(char y){
     node *temp= new node(y);
     if (!head) {
          head=tail=temp;
     }else{
          tail->next=temp;
          tail=temp;
     }
}



void solve(void){
        string s;
        rd(s);
        int small= 'b' ;// 65 a=97
     int k=0;
//     for (int i=0; i<s.size(); ++i) { // del small
//          push(s[i]);
//     }// creating of linek list;
//
//     node *temp=head;
//     node *follow=nullptr;
//     for (int i=0; i<s.size(); ++i) {
//          if ((s[i]>='a' and s[i]<='z')) {
//               follow=temp;
//               temp=temp->next;
//               if (s[i]=='b') {
//
//               }
//          }
//     }
     reverse(s.begin(), s.end());
     vector<int> sml;
     vector<int> big;

     for (int i=0; i<s.size(); ++i) {
          if (s[i]>='a' and s[i]<='z' and s[i] !='b') {
               sml.push_back(i);
          }
          if (s[i]>='A' and s[i]<='Z' and s[i]!='B') {
               big.push_back(i);
          }
     }


     for (int i=0; i<s.size(); ++i) {
          if (s[i]=='b') {
               s[i]='&';
               for (int k=i+1; k<s.size(); ++k) {
                    if ( s[k]>='a' and s[k]<='z' and s[k]!='b'){
                         s[k]='&';
                         break;
                    }
               }
          }

          if (s[i]=='B') {
               s[i]='&';
               for (int k=i+1; k<s.size(); ++k) {
                    if ( s[k]>='A' and s[k]<='Z' and s[k]!='B'){
                         s[k]='&';
                         break;
                    }
               }
          }
     }

     reverse(s.begin(), s.end());
     dbg(s);
     for (int i=0; i<s.size(); ++i) {
          if (s[i]=='&') {
               continue;
          }
          cout<<s[i];
     }

     br;
     return;
}

void solve2(){
     string s; cin >> s;
    vector<int> a,b;
     for (int i=0; i<s.size(); ++i){
          if(s[i]=='b'){
               if(a.size()) a.pop_back();
          }
          else if(s[i]=='B'){
               if(b.size()) b.pop_back();
          }
          else if(s[i]>='a'&& s[i]<='z'){
               a.push_back(i);
          }
          else{
               b.push_back(i);
          }
     }
     vector<int>res;
     for(auto i: a) res.push_back(i);
     for(auto i: b) res.push_back(i);

     sort(res.begin(), res.end());

     for(auto i: res) cout << s[i];
     cout << '\n';

}

int main(){
     setIO
     inout

     int testcase=1;
           rd(testcase);
     while (testcase--) {
          solve2();
     }

     Time;
     return 0;
}










/*      THE END */
