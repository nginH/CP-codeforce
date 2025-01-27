     //
     //  main.cpp
     //  CSES Grid Paths
     //
     //  Created by Harsh Anand on 26/10/2023.
     //

     // C++ implementation of the above approach
#include <bits/stdc++.h>
#define MAX 5
using namespace std;
using namespace chrono;


void getallpath(int matrix[MAX][MAX], int n,int row,int col,vector<string> &ans,string cur)
{
     if(row>=n or col>=n or row<0 or col<0 or matrix[row][col] == 0)
          return ;

     if(row == n-1 and col == n-1)
          {
          ans.push_back(cur);
          return ;
          }

          //now if its one we have 4 calls
     matrix[row][col] = 0;

     getallpath(matrix,n,row-1,col,ans,cur+"U");
     getallpath(matrix,n,row,col+1,ans,cur+"R");
     getallpath(matrix,n,row,col-1,ans,cur+"L");
     getallpath(matrix,n,row+1,col,ans,cur+"D");

     matrix[row][col] = 1;

     return ;
}

vector<string> findPath(int matrix[MAX][MAX], int n) {
          // Your code goes here
     vector<string> ans;
     getallpath(matrix,n,0,0,ans,"");
     return ans;
}


int main(){

#ifndef ONLINE_JUDGE
          freopen("/Users/harshanand/Desktop/C++ file/CSES Grid Paths/input.txt","r",stdin);
          freopen("/Users/harshanand/Desktop/C++ file/CSES Grid Paths/output.txt", "w", stdout);
          auto start = high_resolution_clock::now();

#endif

          ios_base::sync_with_stdio(false);
          cin.tie(NULL);
     int m[MAX][MAX] = { { 1, 0, 0, 0, 0 },
          { 1, 1, 1, 1, 1 },
          { 1, 1, 1, 0, 1 },
          { 0, 0, 0, 0, 1 },
          { 0, 0, 0, 0, 1 } };
     int n = sizeof(m) / sizeof(m[0]);
     vector<string> ans = findPath(m, n);
     for(auto i : ans)
          cout<<i<<" ";

     

#ifndef ONLINE_JUDGE
          auto end = high_resolution_clock::now();
          std::chrono::duration<double> time=(end- start);
          milliseconds d= std::chrono::duration_cast<std::chrono::milliseconds>(time);
          cout<<"\n"<<d.count()<<"ms\n";
#endif

          return 0;
     }


