//
//  main.cpp
//  linked_list_c++
//
//  Created by Harsh Anand on 31/08/2023.
//

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

//#define H_A code by Harsh Anand
//
//#define Inf 2147483647
//#define Pi acos(-1.0)
//
//#define inout freopen("/Users/harshanand/Desktop/C++ file/linked_list_c++/linked_list_c++/input.txt","r",stdin); freopen("/Users/harshanand/Desktop/C++ file/linked_list_c++/linked_list_c++/output.txt", "w", stdout);
//
//#define pb(x) push_back(x)
//
//#define  sc(x) cin>>x;
//#define pt(x) cout<<x<<"\n";
//#define debug(x)  cout << #x << " = "<< x << "\n";
//#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
//#define no cout<<"NO\n"
//#define yes cout<<"YES\n"
//#define br cout<< "\n" //yey html
//
//
//
//#define to ->next=
//
//
//
//struct Node
//{
//     int data;
//     struct Node *next;
//   //  struct Node *previous;
//};
//
//typedef struct Node *ll;
//
//
//ll first, last ,mid , mid2, temp;
//
//
//void print(ll temp){
//     while (temp!=NULL) {
//          printf("%d\n",  (*temp).data);
//          temp=temp->next;
//
//
//     }
//}
//
//
//void insert(){
//     int tem=560;
//     temp= (ll)malloc(sizeof(ll));
//     temp->data=tem;
//     last->next=temp;
//     temp->next=NULL;
//     last=temp;
//
//
//
//}
//
//
//
//int32_t main(){
//#ifndef ONLINE_JUDGE
//     inout;
//#endif
//
//     first=(ll)malloc(sizeof(ll));
//     last=(ll)malloc(sizeof(ll));
//     mid=(ll)malloc(sizeof(ll));
//     mid2=(ll)malloc(sizeof(ll));
//
//
//
//     scanf("%d", &first->data);
//     scanf("%d", &mid->data);
//     scanf("%d", &mid2->data);
//     scanf("%d", &last->data);
//
//     first to mid;
//     mid to mid2;
//     mid2 to last;
//
//     last->next=NULL;
//
//
//
//     insert();
//     print(first);
//     free(first);
//     return 0;;
//
//}
//
//  main.c
//  satyam_linked list
//
//  Created by Harsh Anand on 02/09/2023.
//


#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>


struct node {
     int data;
     struct node *next;
};

typedef struct node *linked;

linked first ,last, mid,temp, run;
int x=0;
void print_linked_list(linked temp){
     while (temp!=NULL) {
          int tem = temp->data;
          printf("%d\n", tem);
          temp=temp->next;
     }
}


void print2(linked temp){
     if (temp==NULL) {
          return;
     } else {
          print2(temp->next);
          printf("%d  ", temp->data);
     }
}

void crea(void){
     int n;
     printf("enter");
     scanf("%d",&n);// size
     first=(linked)malloc(sizeof(linked));
     scanf("%d", &first->data);
     first->next=NULL;
     last=first;
     n--;
     x++;
     while (n--) {
          temp=(linked)malloc(sizeof(linked));
          scanf("%d", &temp->data);
          temp->next=NULL;
          last->next=temp;
          last=temp;
          x++;
     }
}

void insert_mid(void){
     temp=(linked)malloc(sizeof(linked));
     int y;
     printf("enter index");
     scanf("%d", &y);

     if (y>x) {
          printf("invalid \n");
          return;;
     } else {
          scanf("%d", &temp->data);
          run=first;
          y=y-2;
          while (y--) {
               run=run->next;
          }
          temp->next=run->next;
          run->next=temp;
     }
}

int32_t main( void){
     crea();
     insert_mid();
     print_linked_list(first);
}



