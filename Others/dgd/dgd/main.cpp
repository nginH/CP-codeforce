//
//  main.cpp
//  dgd
//
//  Created by Harsh Anand on 17/01/2024.
//

#include <stdio.h>
#include <stdlib.h>
#include <iostream>
#include <bits/debug.h>
#include <bits/stdc++.h>

struct node {
     int data;
     struct node *next;
} *first, *last;

void create(int x){
     struct node *temp= (struct node*) malloc(sizeof(struct node));
     temp->data=x;
     temp->next=NULL;//

     if (first==NULL) {
          first=last=temp;
     }else{
          last->next=temp;
          last=temp;
     }
}


void print( struct node *temp){
     while (temp!=NULL) {
          printf("%d ", temp->data);
          temp=temp->next;
     }
     printf("\n last %d\n", temp->data );
}

//
//struct Queue {
//     int *arr;
//     int size;
//     int rare;
//     int front;
//};
//
//void enqueur(Queue *q,int data){
//     if ((q->rare +1)%q->size==q->front) {
//          printf("Queue is full\n");
//          return;
//     }else{
//          q->arr[(q->rare++)%q->size]=data;
//     }
//}
//
//void dequeue(Queue *q){
//     if (q->front==q->rare) {
//          printf("queue is empty\n");
//     }else{
//          q->front++;
//     }
//}
//


int main(int argc, const char * argv[]) {
     freopen("/Users/harshanand/Desktop/C++ file/dgd/error.txt", "w", stderr);

     priority_queue<int> a;
     create(1);
     create(2);
     create(3);
     create(4);
     create(5);
     print(first);


//
//     struct Queue * Q= (struct Queue*)malloc(sizeof(struct Queue));
//     Q->arr=(int*) calloc(6, sizeof(int));
//     Q->size=5;
//     Q->front=Q->rare=0;
//     enqueur(Q, 1);
//     enqueur(Q, 2);
//     enqueur(Q, 4);
//     enqueur(Q, 8);
////     dequeue(Q);
////     dequeue(Q);
//     enqueur(Q, 1);
//     enqueur(Q, 2);
//
//     int y=0;
//     dbg(Q->size,Q->front, Q->rare);
//     for (int i=Q->front%Q->size; i<(Q->rare)%Q->size and y<5; ++i,++y) {
//          std::cout<<Q->arr[i]<<" ";
//     }
//     printf("hi");
     return 0;
}
