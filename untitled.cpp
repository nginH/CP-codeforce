#include <iostream>
#include <algorithm>
#include <vector>
#include <string>
using namespace std;

int main(void){

#ifndef ONLINE_JUDGE
   freopen("/Users/harshanand/Desktop/input.txt","r",stdin);
   freopen("/Users/harshanand/Desktop/output.txt", "w", stdout);
#endif

      string  s;
      cin>>s;
      s=s+'$';
      vector<pair<string, int > > v;
      string output="";
      int x=0;
      for( int i=0; i<s.size(); i++){

         cout<< s.substr(i, s.size());
         cout<<"\n";
         v.push_back( { s.substr(i, s.size()), x++});


         }
      sort(v.begin(), v.end());
      for (auto x: v) {
         cout<< x.second<<" ";
         //cout<<x.first<<"\n";
      }

   return 0;
}


