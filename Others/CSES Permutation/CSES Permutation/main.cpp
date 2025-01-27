//
//  main.cpp
//  CSES Permutation
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



void solve(int n){
     if(n<=3 && n>=2){
          cout<<"NO SOLUTION";
          return;
     }if(n==4){
          cout<<"2 4 1 3 ";
          return;
     }

     if (n&1) {
          int m = n-1;
          for (int i=0; m>0 ;i++) {
               cout<<m<<" ";
               m=m-2;
          }
          int x=n;
          for (int i=0; x>=1  ; i++) {
               cout<<x<<" ";
               x=x-2;
          }
     }else{
          int m=n;
          while (m>0) {
               cout<<m<<" ";
               m=m-2;
          }
          m=n-1;
          while (m>0) {
               cout<<m<<" ";
               m=m-2;
          }
     }
  return;
}
int main(){

#ifndef ONLINE_JUDGE
//     freopen("","r",stdin);
//     freopen("", "w", stdout);
     auto start = high_resolution_clock::now();

#endif
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int test=4;
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


