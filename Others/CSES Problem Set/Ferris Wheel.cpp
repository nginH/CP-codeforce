//
//  Ferris Wheel.cpp
//  CSES Problem Set
//
//  Created by Harsh Anand on 12/11/2023.
//

#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#ifndef ONLINE_JUDGE
#else
#define debug(x)
#define debug_2(x,y) cerr << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#endif

#define code by Harsh Anand

#define Inf 2147483647
#define Pi acos(-1.0)
#define no           cout<<"NO\n"
#define yes          cout<<"YES\n"
#define br           cout<< "\n"; //yey html


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


void solve(int num, int weight){

     vector<int> v;
     v.push_back(0);
     v.reserve(num+2);
     for (int i=0; i<num; ++i) {
          int x;
          cin>>x;
          v.push_back(x);
     }
     sort(v.begin(),v.end());
     int count=0;
     debug(v);

     for (int i=num; i>0; --i) {
          if (v[i]==(-1) ) {
               continue;
          }
          for (int j=1; j<num; ++j) {
               if (v[j]==(-1) ) {
                    continue;
               }
               if ((i-j)<=1) {
                    if (v[j]+v[i]>weight) {
                         count++;
                    }
                    v[j]=v[i]=-1;
                    count++;
                    debug(v);
                    continue;
               }
               if (v[j]+v[i]>weight) {
                    count++;
                    v[i]=v[j-1]=(-1);
                    debug(v);
                    break;
               }else if( v[j]+v[i]==weight){
                    count++;
                    v[j]=v[i]= (-1) ;
                    debug(v);
                    break;
               }else if(v[j]+v[i]<weight ){
                    debug(v);
                    continue;
               }
          }
     }

     cout<<count<<"\n";
     return;
}


void solve_attemp2(int num, int weight){
     int v[num];
     for (int i=0; i<num; ++i) {
          cin>>v[i];
     }
     sort(v, v+num);
     int i=0 , j=num-1;
     int ans=0;
     while (i<=j) {
//          cerr<<v[i]<<" "<<v[j]<<"\n";
          if (v[i]+v[j]<=weight) {
               i++;
               j--;
          }else{
               j--;
          }
          ans++;
     }

     cout<<ans;


}













int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Set/input.txt", "r", stdin);
     freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Set/output.txt", "w", stdout);
     freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Set/error.txt", "w", stderr);
     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);


     int num, weight;
     cin>>num>>weight;
//     solve(num, weight);
     solve_attemp2(num, weight);


#ifndef ONLINE_JUDGE
     auto end = high_resolution_clock::now();
     std::chrono::duration<double> time=(end- start);
     milliseconds d= std::chrono::duration_cast<std::chrono::milliseconds>(time);
     cerr<<"\n"<<d.count()<<"ms\n";
#endif
     return 0;
}












     // To: MoM & DaD
     // One day.. i'll make you proud;