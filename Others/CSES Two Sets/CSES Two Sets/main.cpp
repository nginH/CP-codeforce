     //
     //  main.cpp
     //  CSES Two Sets
     //
     //  Created by Harsh Anand on 08/10/2023.
     //

#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define H_A code by Harsh Anand

#define Inf 2147483647
#define Pi acos(-1.0)

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define br cout<< "\n" //yey html



string btos( string se){
     string s= bitset<32> (se).to_string();
     return s;
}

uint64_t s_to_d( string st){
     uint64_t number;
     number = strtoull(st.c_str (),NULL,2);
     return number;
}

long long int check(long long int n){
     return (((n*(n+1)/2)));
}

void solve(long long int n){
     if (check(n)&1) {
          no;
     }else{
          yes;
          vector<long long int>v,v2;
          v.reserve(10000);
          v2.reserve(10000);
         long long int y=n;
         long long int sum=(check(n))/2;// 14;  sum=14;
         long long int ans=0;;
         long long int an=n;
         long long int a1=0, a2=0;
          while ( an--) {
               if(sum>=y){
                    sum=sum-y;
                    a1++;
                    v.push_back(y);
               }else{
                    a2++;
                    v2.push_back(y);
               }
               y--;

          }
          cout<<a1<<"\n";
          for (long long int x:v) {
               cout<<x<<" ";
          }
          cout<<"\n"<<a2<<"\n";
          for (long long int x:v2) {
               cout<<x<<" ";
          }br;

          return;
     }
}

int main(){

#ifndef ONLINE_JUDGE
          //     freopen("","r",stdin);
          //     freopen("", "w", stdout);
     auto start = high_resolution_clock::now();

#endif


     ios_base::sync_with_stdio(false);
     cin.tie(NULL);


    long long int test=7;
     cin>> test;
     solve(test);


#ifndef ONLINE_JUDGE
     auto end = high_resolution_clock::now();
     std::chrono::duration<double> time=(end- start);
     milliseconds d= std::chrono::duration_cast<std::chrono::milliseconds>(time);
     cout<<"\n"<<d.count()<<"ms\n";
#endif

     return 0;
}


