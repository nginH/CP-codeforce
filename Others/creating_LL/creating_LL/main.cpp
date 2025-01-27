//
//  main.cpp
//  creating_LL
//
//  Created by Harsh Anand on 12/09/2023.
//
#include <iostream>
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



     cout<<"enter size od linked list : ";
     cin>>n;
     cout<<"enter element :";
     int xn=n;
     while (xn--) {
          int x;
          cin>>x;
          insert(x);
     }
     del(2);
     print(first);



     return 0;
}

/**
     //Display a Linked List

//#include <iostream>
//#include <stdio.h>
//#include <stdlib.h>
//using namespace std;
//int a=0;
//struct Node
//{
//     int data;
//     struct Node *next;
//}*first=NULL;
//
//void create(int A[],int n)
//{
//     int i;
//     struct Node *t,*last;
//     first=(struct Node *)malloc(sizeof(struct Node));
//     first->data=A[0];
//     first->next=NULL;
//     last=first;
//     for(i=1;i<n;i++)
//          {
//          t=(struct Node*)malloc(sizeof(struct Node));
//          t->data=A[i];
//          t->next=NULL;
//          last->next=t;
//          last=t;
//          }
//}

//void count(struct Node *p){
//     while(p!=NULL){
//          a++;
//          p=p->next;
//     }
//}
//int sum1(struct Node *p){
//     cout<<"hello world";
//     int c=0;
//     while(p){
//          c=c+p->data;
//          p=p->next;
//
//     }
//     return c;
//}
//int main()
//{
//     struct Node *temp;
//     int A[]={3,5,7,10,25,8,32,2};
//     create(A,8);
//     printf("The no of elements is %d. ",a);
//     int c= sum1(first);
//     cout<< c<<"\n";
//     printf("%d\t%d\t",a,c);
//     return 0;
//     }
//#include <stdio.h>
//#include <stdlib.h>
//int a=0,c=0;
//struct Node
//{
//     int data;
//     struct Node *next;
//}*first=NULL;
//void create(int A[],int n)
//{
//     int i;
//     struct Node *t,*last;
//     first=(struct Node *)malloc(sizeof(struct Node));
//     first->data=A[0];
//     first->next=NULL;
//     last=first;
//     for(i=1;i<n;i++)
//          {
//          t=(struct Node*)malloc(sizeof(struct Node));
//          t->data=A[i];
//          t->next=NULL;
//          last->next=t;
//          last=t;
//          }
//}
//
//int max(struct Node *p){
//     a=p->data;
//     while(p!=NULL){
//          if(p->data < (p->next)->data){ //(p->next)->data) this is not a valid argument
//               a=(p->next)->data;
//          }
//          p=p->next;
//     }
//     return a;
//}
//
//int main()
//{
//     struct Node *temp;
//     int A[]={3,5,7,10,25,8,32,2};
//     create(A,8);
//     c=max(first);
//     return 0;
//     }

*/


