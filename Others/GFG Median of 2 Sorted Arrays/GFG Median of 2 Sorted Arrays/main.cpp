//
//  main.cpp
//  GFG Median of 2 Sorted Arrays
//
//  Created by Harsh Anand on 03/11/2023.
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





double MedianOfArrays(vector<int>& array1, vector<int>& array2)
{

     int i,j,k;
     i=j=k=0;
     vector<int> ans;
     ans.reserve(100000);

     while (i<array1.size() && j<array2.size()) {
          if (array1[i]<=array2[j]) {
               ans.push_back(array1[i++]);
          }else{
               ans.push_back(array2[j++]);
          }
     }
     for (; i<array1.size();i++) {
          ans.push_back(array1[i]);
     }
     for (; j<array2.size(); j++) {
          ans.push_back(array2[j]);
     }

     double b= (double) ans[(ans.size()/2)-1];
     double a=(double)ans[(ans.size()/2)];
     if(!(ans.size()&1)){
          double c= (double)(a+b)/2.0;
          return c;
     }else{
          return a;
     }

     return 0;


}

//1 2 3 5 6 0

int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/GFG Median of 2 Sorted Arrays/inp.txt","r",stdin);
//     freopen("", "w", stdout);
     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int m, n;
     cin>>m>>n;
     vector<int > arr(m), arr2(n);
     for (int i=0; i<m; ++i) {
          cin>>arr[i];
     }
     for (int i=0; i<n; ++i) {
          cin>>arr2[i];
     }

     cout<<MedianOfArrays(arr, arr2);



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

