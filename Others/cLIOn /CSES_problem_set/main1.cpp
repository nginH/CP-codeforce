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

/*
void solve(int a){
//cout<<"harsh";
     string boy , girl;

     cin>>boy>>girl;
int count=0;
int b=0;
int g=0;
     for (int i = 0; i < a ; ++i) {
          if(boy[i]== girl[i]){
               continue;
          }

          else if((boy[i]== 'R' || boy[i]== 'P') &&  (girl[i]== 'R' || girl[i]== 'P'))
               if (boy[i]=='P'  && girl[i]=='R'){
                    b++;
          }else{
                    g++;
               }


          else if((boy[i]== 'S' || boy[i]== 'P') &&  (girl[i]== 'S' || girl[i]== 'P'))
               if (boy[i]=='S' && girl[i]=='P'){
                    b++;
               }else{
                    g++;
               }


//          else if((boy[i]== 'R' || boy[i]== 'P') &&  (girl[i]== 'R' || girl[i]== 'P'))
//               if (boy[i]=='R' &&  girl[i]=='R'){
//                    b++;
//               }else{
//                    g++;
//               }

          else if((boy[i]== 'R' || boy[i]== 'S') &&  (girl[i]== 'R' || girl[i]== 'S'))

               if (boy[i]=='R' && girl[i]=='S'){
                    b++;
               }else{
                    g++;
               }

     }

//     debug_2(b,g)

     if (b==g){
          cout<<"1\n";
     }
     if (b>g){
          cout << '0' << "\n";
     }
     int an=0;

     if (b<g){
//          cout<<"harsh";
          while(b<=g){
               an++;
               b++;
               g--;
          }
          cout<<an<<'\n';
     }

//     debug_2(b,g)

     return;
}


*/

void  Maximal(int a, int b){
int m=0;
int ans=0;
int prev_m=0;
     for (int i = 0; i <=a/2 ; ++i) {
          if (m!=prev_m){
               ans=i;
               m=prev_m;
          }
          int x = i % b * (a - i) % b;
          prev_m = max(m,x);
     }

     cout << ans << "\n";



}




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
          int a,b;
          cin>>a;
          cin>>b;

          Maximal(a, b);
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

