//
//  main.cpp
//  A. Increasing Sequence
//
//  Created by Harsh Anand on 07/10/2023.
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

uint64_t stod( string st){
     uint64_t number;
     number = strtoull(st.c_str (),NULL,2);
     return number;
}



void solve(int a){

     vector<long long int> v(a) ,x;
     x.reserve(1000);
     for (int i=0; i<a; ++i) {
          cin>>v[i];
     }

//     v[0]==1?x.push_back(2):x.push_back(1);

     bool check=true;
     int w=0;
     for (int i=0; i<a; i++) {
          if(check){
               v[i]==1?x.push_back(2):x.push_back(1);
               check=false;
               v[0]==1?w=2:w=1;
               continue;
          }

          if (v[i]!=(x[i-1]+1)) {
               x.push_back(x[i-1]+1);
          }else{
               x.push_back(x[i-1]+2);
          }


     }
    long long int ans=0;
     for( auto m:x){
          ans=m;
     }
     cout<<ans<<"\n";
     





     return;
}




int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/A. Increasing Sequence/A. Increasing Sequence/input.txt","r",stdin);
     freopen("/Users/harshanand/Desktop/C++ file/A. Increasing Sequence/A. Increasing Sequence/output.txt", "w", stdout);
     auto start = high_resolution_clock::now();
#endif
     

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int test;
     cin>> test;
     while (test--) {
          int a;
          cin>>a;
          solve(a);
     }

#ifndef ONLINE_JUDGE
     auto end = high_resolution_clock::now();
     std::chrono::duration<double> time=(end-start);
      milliseconds d= std::chrono::duration_cast<std::chrono::milliseconds>(time);
     cout<<"\n"<<d.count()<<"ms\n";
#endif
     return 0;
}


