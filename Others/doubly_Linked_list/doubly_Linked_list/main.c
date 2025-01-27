//
//  main.c
//  doubly_Linked_list
//
//  Created by Harsh Anand on 29/10/2023.
//

#include <stdio.h>
#include <stdlib.h>

struct node {
    char data;
     struct node * prev;
     struct node * next;
};

typedef struct node *Doubly;
Doubly first , last;

void create(void){
     fflush(stdin);
     Doubly temp=(Doubly)malloc(sizeof(Doubly));
     if (temp==NULL) {
          printf("fail to allocate memory");
          return;
     }
     scanf("%c", &temp->data);
     temp->prev=NULL;
     temp->next=NULL;
     if (first==NULL) {
          first=temp;
          last=temp;
     }else{
          temp->prev=last;
          last->next=temp;

          last=temp;
     }
}
void print(void){
     Doubly temp=first;
     while (temp) {
          printf("%c ", temp->data);
          temp=temp->next;
     }
}
void printr(void){
     Doubly temp=last;
     while (temp) {
          printf("%c ", temp->data);
          temp=temp->prev;
     }
}



void push_front(void){
     Doubly temp= (Doubly)malloc(sizeof(Doubly));
     printf("%s", &temp->data);
     temp->next=first;
     temp->prev=NULL;
     first=temp;
}


int main(void){
     int n=5;
     while (n--) {
          create();
     }
     print();
     printf("\n");
     push_front();
     printr();

}
