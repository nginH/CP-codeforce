//
//  main.c
//  CSES Grid Paths c
//
//  Created by Harsh Anand on 26/10/2023.
//


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>
     // yey its look wierd!!

#define Inf 214n48364n
#define Pi acos(-1.0)

#define MIN(a,b) (((a)<(b))?(a):(b))
#define MAX(a,b) (((a)>(b))?(a):(b))

#define H_A code by Harsh Anand
#define ll long long int
#define ld long double
#define inout\
 freopen("/Users/harshanand/Desktop/C++ file/CSES Grid Paths c/CSES Grid Paths c/input.txt","r",stdin);\
 freopen("/Users/harshanand/Desktop/C++ file/CSES Grid Paths c/CSES Grid Paths c/output.txt", "w", stdout);

#define F(name,upper)\
for(int name=0; name<upper ; name++)
#define Fn(name,low,upper)\
for(int name=low; name<=upper ; name++)

#define sort(base, size) qsort(base, size , sizeof(int), Harsh)
#define search(addres_of_key, base_address_of_array, size_of_array) \
(int*) bsearch (&addres_of_key,base_address_of_array, size_of_array, sizeof (int), comp)
     // What theeee fukkkkkkkkk

     //                                                  =============================

int Harsh(const void *a, const  void *b){
     return *(int *)a- *(int*)b;
}

void swap(int *a, int *b){
     int temp=*a;
     *a=*b;
     *b=temp;
}

ll gcd(int a, int b) {
     if (!a || !b)
          return a | b;
     unsigned shift = __builtin_ctz(a | b);
     a >>= __builtin_ctz(a);
     do {
          b >>= __builtin_ctz(b);
          if (a > b)
               swap(&a, &b);
          b -= a;
     } while (b);
     return a << shift;
}

ll lcm(int a, int b){
     return ((long long int)a*b)/(gcd(a, b));
}

int n=4;
bool safe(int solve[n][n], int x, int y ){
     if (x>=0 && y>=0 && x<n && y<n && solve[x][y]==1) {
          return true;
     }else{
          return false;
     }
}


void print(int sol[n][n]){
     for (int i=0; i<n; ++i) {
          for (int j=0; j<n; ++j) {
               printf("%d ", sol[i][j]);
          }
          printf("\n");
     }
}

bool solve_the_maze(int maze[n][n], int x ,int y, int sol[n][n] ){

     if (x==n-1 && y==n-1 && sol[x][y]==1) {
          sol[x][y]=1;
          print(sol);
          return true;
     }
     if (safe(sol, x, y)) {
          if(sol[x][y]==1){
               return false;
          }
          sol[x][y]=1;

          if(solve_the_maze(maze, x+1, y, sol)){
               return true;
          }
          if(solve_the_maze(maze, x, y+1, sol)){
               return true;
          }
          if(solve_the_maze(maze, x-1, y, sol)){
               return true;
          }
          if(solve_the_maze(maze, x, y-1, sol)){
               return true;
          }

          sol[x][y]=0;
          return false;

     }
     return true;
}

int main(void){
#ifndef ONLINE_JUDGE
     inout;
#endif
     int maze[n][n];

     for (int i=0; i<n; ++i) {
          for (int j=0; j<n; ++j) {
               scanf("%d", &maze[i][j]);
          }
     }
     for (int i=0; i<n; ++i) {
          for (int j=0; j<n; ++j) {
               printf("%d ",maze[i][j]);
          }
          printf("\n");
     }



     int sol[n][n];
     memset(sol, 0, sizeof(sol));




     return 0;
}





