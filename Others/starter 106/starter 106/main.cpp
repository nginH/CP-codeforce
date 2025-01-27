#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define code by Harsh Anand

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

void solve(int a, int b){

     int arr[a];
     for (int i=0; i<a; ++i) {
          cin>>arr[i];
     }
     int count =0;
     for (int i=0; i<=a-b; i++) {
          for (int j=0; j<b; ++j) {
               if ( arr[i+j]&1 ) {
                    count++;
                    break;
               }
          }
     }


     cout<<count<<"\n";

     return;
}




int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/starter 106/starter 106/input.txt","r",stdin);
     freopen("/Users/harshanand/Desktop/C++ file/starter 106/starter 106/dick.out", "w", stdout);
     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     string s,m;
     cin>>s>>m;
     String_match(s, m);

     int test;
     cin>> test;
     while (test--) {
          int x;
          cin>>x;
//          solve(<#int a#>, <#int b#>)


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

