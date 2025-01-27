//
// Created by Harsh Anand on 08/11/2023.
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

uint64_t fact( uint64_t n){
     uint64_t ans=1;
     for (int i = 1; i <= n; ++i) {
          ans *= i;
     }
     return ans;
}


int f(int p,int q,int r) {
     int ans = 0;
     for (int i = 0; i <= p; i++) {
          int temp = 0;
          for (int j = 1; j <= q; j++) {
               int ta = pow(r, i);              // where pow() is the power function
               int  tb = (ta - 1) / ta;
               temp += pow(tb, j);
          }



          int temp2 = fact(p) / (fact(p - i) * fact(i));// where fact() is the factorial function
          if (i & 1) ans -= temp * temp2;
          else ans += temp * temp2;
          debug_2(temp2, temp);
     }
     return ans;

}

void solve(int a, int b){

     int count=0, ans=0;
     cout << "harsh";





     return;
}

//Clang-Tidy: Narrowing conversion from 'typename std::__enable_if_t<std::is_arithmetic<int>::value && std::is_arithmetic<int>::value, std::__promote<int, int> >::type' (aka 'double') to 'int'


int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Library/Application Support/JetBrains/CLion2023.2/scratches/input.txt",  "r", stdin);
     freopen("/Users/harshanand/Library/Application Support/JetBrains/CLion2023.2/scratches/output.txt", "w", stdout);
     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);




     int test;
     cin>> test;
     while (test--) {
          int a,b,c;
          cin>>a;
          cin>>b;
          cin>>c;
          cout<<f(a, b, c);

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

