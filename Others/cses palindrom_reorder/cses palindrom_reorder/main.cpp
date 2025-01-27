//
//  main.cpp
//  cses palindrom_reorder
//
//  Created by Harsh Anand on 27/10/2023.
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


void solve(string s){

     int c[26];
     memset(c, 0, sizeof(c));
     for(int x:s){
          c[x-'A']++;
     }
     br;
     int b=0;
     for (int i=0; i<26; ++i) {
          if(c[i]&1){
               b++;
          }
     }
     if(b>1){
          cout<<"NO SOLUTION\n";
          return;
     }
     vector<char> v;
     v.reserve(100000);

     for (int i=0; i<26; ++i) {
          int n=c[i]/2;
          if(!(c[i]&1)){
               while (n--) {
                    v.push_back('A'+i);
               }
          }
     } // first posative half


     for (int i=0; i<26; ++i) {
          int n=c[i];
          if((c[i]&1)){
               while (n--) {
                    v.push_back('A'+i);
               }
          }
     } // odd half

     for (int i=25; i>=0; --i) {
          int n=c[i]/2;
          int x= c[i];
          if(!(x&1)){
               while (n--) {
                    v.push_back('A'+i);
               }
          }
     }// next half
     

     for (auto x:v) {
          cout<<x;
     }

}



int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/cses palindrom_reorder/cses palindrom_reorder/input.txt","r",stdin);
     freopen("/Users/harshanand/Desktop/C++ file/cses palindrom_reorder/cses palindrom_reorder/output.txt", "w", stdout);
     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);


     string s;
     cin>>s;
     solve(s);


#ifndef ONLINE_JUDGE
     auto end = high_resolution_clock::now();
     std::chrono::duration<double> time=(end- start);
     milliseconds d= std::chrono::duration_cast<std::chrono::milliseconds>(time);
     cout<<"\n"<<d.count()<<"ms\n";
#endif

     return 0;
}


