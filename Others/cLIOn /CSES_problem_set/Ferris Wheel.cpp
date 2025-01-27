//
// Created by Harsh Anand on 09/11/2023.
//
#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#else
#define debug(x)
#endif
using namespace std;
using namespace chrono;

#define code by Harsh Anand

#define Inf 2147483647
#define Pi acos(-1.0)

#define pb(x) push_back(x)
#define sc(x)        cin>>x;
#define pt(x)        cout<<x<<"\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
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



void solve(int a, int b){

      vector<int> v(a);
     for (int i = 0; i < a; ++i) {
          cin>>v[i];
     }
     std::sort(v.begin(), v.end());
      int x=0;
     v.erase(v.begin() + 1);
int i=0;
     for (x; i < v.size()-x; ++i) {
          while (v[v.size() - i - 1] + v[x] <=b){
               x++;
          }
          v.erase(v.begin() + x);
          v.pop_back();
          if (v.size()==0) {
               break;
          }

          debug(v);
     }
     cout << i << "\n";





     return;
}




int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Library/Application Support/JetBrains/CLion2023.2/scratches/input.txt",  "r", stdin);
     freopen("/Users/harshanand/Library/Application Support/JetBrains/CLion2023.2/scratches/output.txt", "w", stdout);
     freopen("/Users/harshanand/Library/Application Support/JetBrains/CLion2023.2/scratches/error.txt", "w", stderr);
     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);




     int test=1;
//     cin>> test;
     while (test--) {
          int a,b;
          cin>>a;
          cin>>b;
         
          solve(a,b);
        
     }



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

