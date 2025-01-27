     //
     //  Count Nice Pairs in an Array.cpp
     //  CODEFORCE's
     //
     //  Created by Harsh Anand on 21/11/2023.
     //

#pragma GCC optimize("Ofast")
#pragma GCC target("sse,sse2,sse3,ssse3,sse4,popcnt,abm,mmx,avx,avx2,fma")
#pragma GCC optimize("unroll-loops")
#include <bits/stdc++.h>
#include <iostream>
using namespace std;
using namespace chrono;

#ifndef ONLINE_JUDGE
#include <bits/debug.h>
#define inout  \
freopen("/Users/harshanand/Desktop/C++ file/CODEFORCE's/CODEFORCE's/file/input.txt", "r", stdin)  ;\
freopen("/Users/harshanand/Desktop/C++ file/CODEFORCE's/CODEFORCE's/file/output.txt", "w", stdout);\
freopen("/Users/harshanand/Desktop/C++ file/CODEFORCE's/CODEFORCE's/error.txt", "w", stderr) ; \
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

#define setIO                     \
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

int64_t rev(int64_t n){
     int64_t ans=0;
     while (n!=0) {
          ans=ans*10+ n%10;
          n/=10;
     }
     return ans;
}


struct node {
     int64_t data;
     int64_t r_data;
     struct node *next, *prev;

}*head, *tail;



void create(int x){
     cout<<x<<" ";
     auto temp=new node;
     temp->data=x;
     temp->r_data=rev(x);
     temp->next=temp->prev=nullptr;
     if (!head) {
          head=tail=temp;
     }else{
          temp->prev=tail;
          tail->next=temp;
          tail=temp;
     }
}

void print(node * temp){
     while (temp) {
          cerr<<temp->data<<" "<<temp->r_data<<"\n";
          temp=temp->next;

     }
}
     //nums[i] + rev(nums[j]) == nums[j] + rev(nums[i])

     //
     //
     //
     //int countNicePairs(vector<int>& nums) {
     //     int ans=0;
     //     sort(nums.begin(), nums.end());
     ////     debug(nums);
     ////     nums[i] + rev(nums[j]) == nums[j] + rev(nums[i])
     //
     //
     //     for (int i=0;i<nums.size(); ++i) {
     //          create(nums[i]);
     //     }
     //     search();
     //     print(head);
     //     return ans;
     //
     //}
     //

int rev(int n){
     int reverse=0;
     while(n){
          reverse=reverse*10+n%10;
          n/=10;
     }
     return reverse;
}

int countNicePairs(vector<int>& nums) {
     int count=0;
     int mod=1e9+7;

     int dp[nums.size()];

     memset(dp, -1, nums.size());
     int i=0;
     for(auto x:nums) dp[i++]= x;
     for(int i=0;i<nums.size();i++){
          if(/* DISABLES CODE */ (0)){
               continue;
          }
          for(int j=i+1;j<nums.size();j++){

               if(nums[i]+rev(nums[j])== nums[j] + rev(nums[i])){
                    debug(nums[i], nums[j]);
                    count++;
                    dp[j]=-1;
               }

          }

     }
     cerr<<"\n";
     return count;
}





void solve(void){
     vector<int> v;
     int n;
     rd(n);
     for (int i=0; i<n; ++i) {
          int x;
          cin>>x;
          v.push_back(x);
     }
     cout<<countNicePairs(v)<<"\n";

          //     debug(v);



     return;
}




int main(){
     setIO;
     inout;

     int testcase=1;
     rd(testcase);
     while (testcase--) {
          solve();
     }

     Time;
     return 0;
}












     // To: MoM & DaD
     // One day.. i'll make you proud;






