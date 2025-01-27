//
//  main.cpp
//  CSES Problem Two Knights
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


void solve(long long int i){
     for(long long int n=1; n<=i;n++){
          int64_t as= (n - 1)*(n + 4)*(powl(n, 2) - 3*n + 4)/2;
          cout<<as<<"\n";
     }
     return;
}




int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Two Knights/CSES Problem Two Knights/input.txt","r",stdin);
     freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Two Knights/CSES Problem Two Knights/output.txt", "w", stdout);
     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     int test;
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


