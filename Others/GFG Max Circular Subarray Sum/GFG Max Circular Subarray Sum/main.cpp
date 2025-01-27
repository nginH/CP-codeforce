//
//  main.cpp
//  GFG Max Circular Subarray Sum
//
//  Created by Harsh Anand on 03/11/2023.
//https://www.geeksforgeeks.org/problems/max-circular-subarray-sum-1587115620/1?page=1&category=Arrays&company=Amazon&difficulty=Hard&sortBy=submissions

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


long long int MAX( long long int a, long long int b){
     return  a>b? a:b;
}


void circularSubarraySum(int *arr, int num, int low , int high){


     int fin=INT32_MIN;
     for (int i=low; i<high; ++i) {
          int x=num , j=i;
          int64_t ans=INT32_MIN, sum=INT32_MIN;
          while (x--) {
               if (j<num) {
                    debug_2(ans, sum);
                    sum= MAX((sum+arr[j]),arr[j]);
                    ans= MAX(ans, sum);
                    j++;
               }
               if(j==num){
                    j=0;
               }
          }
          fin= (int32_t)MAX(ans, fin);
     }
     cout<<fin<<"\n";
}


int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/GFG Max Circular Subarray Sum/input.txt","r",stdin);
//     freopen("", "w", stdout);
     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);




     int test;
     cin>> test;
     while (test--) {
          int a;
          cin>>a;

          int arr[a];
          for (int i=0; i<a; ++i) {
               cin>>arr[i];
          }

          std::thread t1(circularSubarraySum, arr, a, 0, 3);
           std::thread t2(circularSubarraySum, arr, a, 4, 7);

          try {
               t1.join();
               t2.join();
          } catch (const std::exception& e) {
               std::cerr << e.what() << std::endl;
          }


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

