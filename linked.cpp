//
//  main.cpp
//  creating_LL
//
//  Created by Harsh Anand on 12/09/2023.
//

#include <bits/stdc++.h>

using namespace std;
int n;
struct node{
     int data;
     struct node * next;
};


typedef struct  node *LL;


LL first, last, temp;


void insert( int x){
     temp =(LL) malloc( sizeof(LL));
     temp->data= x;
   temp->next=NULL;
     if (first== NULL) {
          first=last=temp;
     }else{
          last->next= temp;
          last=temp;
     }
}

//struct dnode {
//     int data;
//     struct dnode *next;
//     struct dnode *prev;
//};
//
//typedef struct dnode *dll;
//
//dll first ,last,temp;
//
//void dolby( int x){
//
//     temp = (dll) malloc(sizeof(int));
//     temp->data= x;
//     temp->next=NULL;
//     temp->prev= last;
//
//     if (first==NULL) {
//          first= last=temp;
//          first->prev= NULL;
//     }else{
//
//          last=temp;
//
//     }
//}



void print( LL temp){

     while (temp ) {
          cout<<temp->data<<" ";
          temp = temp->next;

     }
}

void del(int index){

     if(index>n || index <0){
          cout<<"index id out of range";
          return;
     }else{
          int x=1;
          LL pre=NULL;
          LL temp=first;
          while (index--) {
               pre=temp;
               temp=temp->next;

          }
          pre->next=temp->next;
         free(temp);
     }





}


int main(void) {

cout<<"hello wro;d";

     // cout<<"enter size od linked list : ";
     // cin>>n;
     // cout<<"enter element :";
     // int xn=n;
     // while (xn--) {
     //      int x;
     //      cin>>x;
     //      insert(x);
     // }
     // del(2);
     // print(first);



     return 0;
}
