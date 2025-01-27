     //
     //  codeing ninja.cpp
     //  Dynamic programming
     //
     //  Created by Harsh Anand on 08/03/2024.
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
freopen("/Users/harshanand/Desktop/desktop/C++ file/Dynamic programming/Dynamic programming/input.txt", "r", stdin)  ;\
freopen("/Users/harshanand/Desktop/desktop/C++ file/Dynamic programming/Dynamic programming/output.txt", "w", stdout);\
freopen("/Users/harshanand/Desktop/desktop/C++ file/Dynamic programming/Dynamic programming/error.txt", "w", stderr) ; \
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



class Node
{
public:
     int data;
     Node *next;
     Node(int data)
     {
     this->data = data;
     this->next = NULL;
     }
};



vector< Node *> interweaveNodes(Node *head1, Node *head2) {
          // Write your code here.t
     vector<Node*> ans;
     ans.reserve(1000);
     vector<Node*> ans2;
     ans2.reserve(1000);

     int m,n;

     int a;
     int b=1;
     a=1;
     Node *temp;
     if (head1) {
          temp = head1;
     }else{
          temp=head2;
     }
     bool dp[10000];
     memset(dp, 0, 10000);
     while(head1->data!=-1 and head2->data!=-1){
          if(a&1){
               temp=head1;
               head1=head1->next;
          }else{
               temp=head2;
               head2=head2->next;
          }
          if(a==1|| a%4==0){
               ans.push_back(temp);
               dp[a]=1;
               if(a%4==0){
                    a++;
                    dp[a]=1;
                    if(a&1){
                         temp=head1;
                         head1=head1->next;
                    }else{
                         temp=head2;
                         head2=head2->next;
                    }
                    ans.push_back(temp);
               }
          }
          a++;
     }
     return ans;
}


Node* create(){
     Node* temp;
     if (<#condition#>) {
          <#statements#>
     }
}

void solve(void){
     int a,b;
     a=1;
     b=1;

     bool dp[100];
     memset(dp, 0, 100);

     int x=50;
     while (x--) {

          if(a==1 || a%4==0){
               cout<<a<<" ";
               dp[a]=1;
               if(a%4==0){
                    a++;
                    dp[a]=1;
                    cout<<a<<" ";
               }
          }
          a++;

     }



     while (x--) {
          if (dp[a]!=1) {
               cerr<<a<<" ";
          }
          a++;
     }


     return;
}


int main(){
     setIO;
     inout;

     int testcase=1;
          // rd(testcase);
     while (testcase--) {
          solve();
     }

     Time;
     return 0;
}











/*      THE END */
