#include <iostream>
#include <algorithm>
#include <array>
#include <bitset>
#include <cassert>
#include <chrono>
#include <climits>
#include <cmath>
#include <complex>
#include <cstring>
#include <functional>
#include <iomanip>
#include <map>
#include <numeric>
#include <queue>
#include <random>
#include <set>
#include <vector>
using namespace std;

#define H_A code by Harsh Anand

#define Inf 2147483647
#define Pi acos(-1.0)

#define inout freopen("/Users/harshanand/Desktop/C++ file/BInary_expo/BInary_expo/input.txt","r",stdin); freopen("/Users/harshanand/Desktop/C++ file/BInary_expo/BInary_expo/output.txt", "w", stdout);

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define br cout<< "\n" //yey html

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h> //Header file for sleep(). man 3 sleep for details.
#include <pthread.h>

     // A normal C function that is executed as a thread
     // when its name is specified in pthread_create()
void *myThreadFun(void *vargp)
{
     sleep(1);
     printf("Printing GeeksQuiz from Thread \n");
     return NULL;
}

int main()
{

#ifndef ONLINE_JUDGE
     inout;
#endif


     pthread_t thread_id;
     printf("Before Thread\n");
     pthread_create(&thread_id, NULL, myThreadFun, NULL);
     pthread_join(thread_id, NULL);
     printf("After Thread\n");
     exit(0);

     pthread_mutex_t
}


