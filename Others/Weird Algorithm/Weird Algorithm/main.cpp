//
//  main.cpp
//  Weird Algorithm
//
//  Created by Harsh Anand on 08/10/2023.
//https://cses.fi/problemset/task/1068

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



void solve(long long int n){

     cout<<n<<" ";
     for (int i=0; n!=1; i++) {

          if (n%2==0) {
               n/=2;
          }else{
               n=3*n+1;
          }
          cout<<n<<" ";

     }



     return;
}




int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/Weird Algorithm/Weird Algorithm/input.txt","r",stdin);
     freopen("/Users/harshanand/Desktop/C++ file/Weird Algorithm/Weird Algorithm/output.txt", "w", stdout);
     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

    long long  int a;
     cin>>a;
          solve(a);



#ifndef ONLINE_JUDGE
     auto end = high_resolution_clock::now();
     std::chrono::duration<double> time=(start- end);
     milliseconds d= std::chrono::duration_cast<std::chrono::milliseconds>(time);
     cout<<"\n"<<d.count()<<"ms\n";
#endif

     return 0;
}


