//
//  main.cpp
//  CSES Problem Trailing Zeros
//
//  Created by Harsh Anand on 09/10/2023.
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

void solve(int m){
     vector<int> v;
     v.reserve(100000);
     v.push_back(1);
     int carry=0;
     for (int i=2; i<=m; ++i) {  //O(n)
          for (int j=0; j<v.size(); ++j) { //O(m)
               int temp= v[j]*i;
               v[j]= (temp+carry)%10;
               carry=(temp+carry)/10;
          }
          while (carry!=0) {
               v.push_back(carry%10);
               carry=carry/10;
          }
     }
     reverse(v.begin(), v.end());
     for(auto x:v){
          cout<<x;
     }
     br;   // O(n*m);
     int ans=0;
     for(int x:v){
          if (x==0){
               ans++;
               continue;
          }else{
               break;
          }
     }
     cout<<ans<<"  ";
     return;
}// not viable in case of number bigger then 10^4


void solve2( uint64_t n){
     uint64_t n2= n;
     uint64_t sum=0;
     while (n2>=1) {
          n2=n2/5;
          sum+=n2;
     }//O(log5(n))


     uint64_t n3= n;
     uint64_t sum2=0;
     while (n3>=1) {
            n3=n3/2;
          sum2+=n3;
     }
     //O(log2(n);
     cout<<sum<<"\n";

}//overallcomplaxity of program is O(log2(n));




int main(){

#ifndef ONLINE_JUDGE
     auto start = high_resolution_clock::now();
#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     int n=1;
     cin>>n;
     solve(n);
#ifndef ONLINE_JUDGE
     auto end = high_resolution_clock::now();
     std::chrono::duration<double> time=(end- start);
     milliseconds d= std::chrono::duration_cast<std::chrono::milliseconds>(time);
     cout<<"\n"<<d.count()<<"ms\n";
#endif

     return 0;
}


