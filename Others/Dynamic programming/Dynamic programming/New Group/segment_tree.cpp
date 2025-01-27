//
//  segment_tree.cpp
//  Dynamic programming
//
//  Created by Harsh Anand on 19/03/2024.
//
#include <bits/stdc++.h>
#include <bits/debug.h>
template <typename T> void rd(T& a) {  cin >> a; }
template <typename T, typename... Args> void rd(T& a, Args&... args) { cin >> a;rd(args...);}


const int n=1e5+2;
int a[n], tree[4*n];

void build(int node, int start, int end){
     if(start==end){
          tree[node]=a[start];
          return;
     }
     int mid= (start+end)/2;
     build(2*node, start, mid);
     build(2*node+1, mid+1, end);
//variable
     tree[node]=tree[2*node]+tree[2*node+1];
}




int main(){
     freopen("/Users/harshanand/Desktop/desktop/C++ file/Dynamic programming/Dynamic programming/input.txt", "r", stdin)  ;\
     freopen("/Users/harshanand/Desktop/desktop/C++ file/Dynamic programming/Dynamic programming/output.txt", "w", stdout);\
     freopen("/Users/harshanand/Desktop/desktop/C++ file/Dynamic programming/Dynamic programming/error.txt", "w", stderr) ; \
     int n;
     cin>>n;
     for (int i=0; i<n; ++i) {
          cin>>a[i];
     }
     build(1, 0, n-1);
     for (int i=0; i<15; ++i) {
          cout<<tree[i]<<" ";
     }


}
/*

 Hi
 Your account number is: 886917
 Your new database is now ready to use.
 To connect to your database use these details;
 Host: sql6.freesqldatabase.com
 Database name: sql6692771
 Database user: sql6692771
 Database password: XsyfIZucfw
 Port number: 3306


 */
