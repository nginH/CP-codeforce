// Created by Harsh Anand on 08/11/2023.
#include <bits/stdc++.h>
using namespace std;
int  main(void ){
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int n;
     scanf("%d", &n);
     unordered_map<int, int > m;
     m.reserve(1000000);
     while(n--){
          int y;
          scanf("%d", &y);
          m[y]++;
     }
     printf("%zu\n", m.size());
}
//














// To: MoM & DaD
// One day  i'll make you proud;
