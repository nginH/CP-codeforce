//
// Created by Harsh Anand on 08/11/2023.
//

#include <bits/stdc++.h>
using namespace std;

int32_t main(void ){
     uint64_t n,m;
     cin >> n >> m;
     vector<uint64_t> sum;
     sum.reserve(n+1);
     sum.push_back(0);
     uint64_t  y=0,x=0;

     while (n--){
          cin >> y;
          x += y;
          sum.push_back(x);
     }
     while (m--) {
          int k,l;
          cin>>k>>l;
          cout << sum[l] - sum[k - 1]<< "\n";
     }



}