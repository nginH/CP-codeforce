//
//  main.cpp
//  geeks_for_geek
//
//  Created by Harsh Anand on 02/11/2023.
//

#include <bits/stdc++.h>
using namespace std;
using namespace chrono;

#define code by Harsh Anand

#define Inf 2147483647
#define Pi acos(-1.0)

#define pb(x) push_back(x)

#define sc(x)        cin>>x;
#define pt(x)        cout<<x<<"\n";
#define debug(x)     cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no           cout<<"NO\n"
#define yes          cout<<"YES\n"
#define br           cout<< "\n"; //yey html

#define print_range(vectorr)    for(auto res:vectorr){ cout<<res<<" ";}
#define print_range_map(mapp)   for(auto x:mapp){ cout<<x.first<<"  "<< x.second<<"\n";}


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

#define  MAX(a,b) a>b?a:b;


void solve(int n){

     vector<int>arr(n);
     for (int i=0; i<n; ++i) {
          cin>>arr[i];
     }

     signed int sum=INT_MIN;
     signed int ans=INT_MIN;
     cout<<sum<<"\n";
     for (int i=0; i<n; ++i) {
          sum=MAX((sum+arr[i]), arr[i]);
          ans= MAX(ans, sum);
          debug_2(sum, ans);

     }
     cout<<ans<<"\n";

     return;
}


//void soovew(int n){
//
//  int   arr[n];;
//     for (int i=0; i<n; ++i) {
//          cin>>arr[i];
//     }
//
//    signed int sum=INT_MIN;
//    signed int ans=0;
//     cout<<sum<<"\n";
//     for (int i= {
//          sum=max(sum+x, x);
//          ans= max(ans, sum);
//          debug_2(sum, ans);
//
//     }
//     cout<<ans<<"\n";
//
//     return;
//}




int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/geeks_for_geek/geeks_for_geek/input.txt","r",stdin);
     freopen("/Users/harshanand/Desktop/C++ file/geeks_for_geek/geeks_for_geek/output.txt", "w", stdout);
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
     std::chrono::duration<double> time=(end- start);
     milliseconds d= std::chrono::duration_cast<std::chrono::milliseconds>(time);
     cout<<"\n"<<d.count()<<"ms\n";
#endif
     return 0;
}












     // To: MoM & DaD
     // One day.. i'll make you proud;

