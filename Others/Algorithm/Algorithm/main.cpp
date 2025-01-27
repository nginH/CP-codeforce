//
//  main.cpp
//  Algorithm
//
//  Created by Harsh Anand on 04/03/2024.
//

#include <bits/stdc++.h>
#include <bits/debug.h>
using namespace std;

void bfs(int stating, int arr[8][8],int i, int j){
     int u=stating;
     cout<<stating<<" ";
     queue<int>q;
     int visited[8];
     memset(visited, 0, 8);
     visited[stating]=1;
     q.push(stating);

     while (!q.empty()) {
          u=q.front();
          q.pop();
          for (int v=1; v<=8; ++v) {
               if (arr[u][v]==1 and visited[v]==0) {
                    cout<<v<<" ";
                    visited[v]=1;
                    q.push(v);
               }
          }
     }
     printf("\n");
}



void dfs(int start ,int arr[8][8],int n){
     static int visited[8]={0};
     if (visited[start]==0) {
          cout<<start<<" ";
          visited[start]=1;
          for (int j=0; j<n; ++j) {
               if (visited[j]==0 and arr[start][j]==1) {
                    dfs(j, arr, n);
               }
          }
     }
}

int main(void){
     int arr[8][8]={{0,0,0,0,0,0,0,0},
          {0,0,1,1,1,0,0,0},
          {0,1,0,1,0,0,0,0},
          {0,1,1,0,1,1,0,0},
          {0,1,0,1,0,1,0,0},
          {0,0,0,1,1,0,1,1},
          {0,0,0,0,0,1,0,0},
          {0,0,0,0,0,1,0,0}};

     bfs(5, arr, 8, 8);
     dfs(5, arr, 8);
     printf("\n\n");

}



