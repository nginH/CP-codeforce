//
//  Reverse the Segment.cpp
//  codechefDSA practice
//
//  Created by Harsh Anand on 16/11/2023.
//https://www.codechef.com/practice/course/interview-dsa/DSAPREP_08/problems/REVSEG

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>

using namespace std;
using namespace chrono;

#ifndef ONLINE_JUDGE
#include <bits/debug.h>
#define inout  \
freopen("/Users/harshanand/Desktop/C++ file/codechefDSA practice/codechefDSA practice/input.txt", "r", stdin)  ;\
freopen("/Users/harshanand/Desktop/C++ file/codechefDSA practice/codechefDSA practice/output.txt", "w", stdout);\
freopen("/Users/harshanand/Desktop/C++ file/codechefDSA practice/codechefDSA practice/error.txt", "w", stderr) ;\
auto start = high_resolution_clock::now();

#define Time auto end = high_resolution_clock::now();\
std::chrono::duration<double> time=(end - start);\
milliseconds d = std::chrono::duration_cast<std::chrono::milliseconds>(time);\
cerr<<"\n"<<d.count()<<"ms\n";

#else
#define inout;
#define Time;
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
template <typename T> void rd(T& a) {  cin >> a; }
template <typename T, typename... Args> void rd(T& a, Args&... args) { cin >> a;rd(args...);}
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

struct node {
     int val;
     struct node *next;
};

void print(struct node*temp){
     while (temp) {
          cout<<temp->val<<" ";
          temp=temp->next;
     }
}
node* create(int x){
     x--;
     node *head = nullptr, *tail=nullptr;
     node *temp= new node();
     cin>>temp->val;
     temp->next=nullptr;
     head=tail=temp;
     while (x--) {
          node *temp= new node();
          cin>>temp->val;
          temp->next=nullptr;
          tail->next=temp;
          tail=temp;
     }

     return head;
}




node* reverseSegment(node* head, int L, int R){
          struct node * temp=head, *a=nullptr, *b=nullptr, *c=nullptr, *d=nullptr;

          for(int i=1;i<=R+1; ++i ){
               if(i==L){
                    a=temp;
               }else
                    if(i>L && i<R){
                         b=c;
                         c=temp;
                         temp=temp->next;
                         c->next=a;
                    }else if(i>R){
                         temp->next=a;
                         break;
                    }
          }
     return head ;


}


int main(){
     setIO;
     inout;

     int testcase=1;
     rd(testcase);
     while (testcase--) {

          
     }

     Time;
     return 0;
}












     // To: MoM & DaD
     // One day.. i'll make you proud;






