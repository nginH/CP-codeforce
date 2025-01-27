//
//  main.cpp
//  CSES Number Spiral
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

int64_t solve(long int a, long int b){

//     if (a%2==0 && b==1) return a*a;
//     if (a%2!=0 && b==1) {
//          return (a-1)*(a-1)+1;
//     }
//     if (a%2==0 && b<=a) {
//          return  (a*a-(b-1));
//     }
//     if (a%2!=0 && b<=a) {
//          return  ((a-1)*(a-1)+1+(b-1));
//     }
//     if (a%2!=0  && b%2!=0 && b>a) {
//          return  ((b-1)*(b-1)) + (b+a+1);
//     }
//     if (a%2!=0  && b%2==0 && b>a) {
//          return  ((b)*(b)) - (b+a-1);
//     }
//     //a even b odd
//     if (a%2==0  && b%2!=0 && b>a) {
//          return  a*a + (b+1);
//     }
//     if (a%2!=0  && b%2==0 && b>a) {
//          return  ((b)*(b)) - (b+a-1);
//     }
// diagonal element
     if (a==b){
          return (a*a-(b-1));
     }
// lower matix;
     if( !(a&1) && b<a){
          return  a*a - abs(b-1);
     }
     if( (a&1) && b<a){
          return  (a-1)*(a-1) + abs(b);
     }
// upper matrix
     // odd odd
     if( (a&b) && b>a && b&1){
          return  b*b - abs(a-1);
     }
     // even even

     if ( b>a&& !(b&1)) {
          return ( b-1)*(b-1) + a;
     }
     // even odd
     if (!(a&1)&& b>a&& (b&1)) {
          return ( b)*(b) - (a-1);
     }
     return 0;
}




int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/CSES Number Spiral/CSES Number Spiral/input.txt","r",stdin);
     freopen("/Users/harshanand/Desktop/C++ file/CSES Number Spiral/CSES Number Spiral/output.txt", "w", stdout);

     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);


    long long int test;
     cin>> test;
     while (test--) {
         long long int a,b;
          cin>>a>>b;

         cout<<solve(a,b);
          br;

     }



#ifndef ONLINE_JUDGE
     auto end = high_resolution_clock::now();
     std::chrono::duration<double> time=(start- end);
     milliseconds d= std::chrono::duration_cast<std::chrono::milliseconds>(time);
     cout<<"\n"<<d.count()<<"ms\n";
#endif

     return 0;
}


