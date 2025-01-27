//
//  main.c
//  cp_pointer
//
//  Created by Harsh Anand on 03/10/2023.
//
#include <stdlib.h>
#include <stdio.h>


struct node {
     int data;
     struct node *  next;
};

typedef struct node  * ll;
struct node *first, *last, *temp, *run;
void create(void){
          temp= (ll)malloc(sizeof(ll));
          printf("enter data : ");
          scanf("%d", &temp->data);
          temp->next=NULL;
          if (first==NULL) {
               first=last=temp;
          }else{
               last->next=temp;
               last=temp;
          }
}


void print( ll temp){    // print fxn
     while (temp !=NULL) {
          printf("%d ", temp->data);
          temp=temp->next;
     }
}


void insert_mid(int index){
     ll temp= first;
     ll new = (ll)malloc(sizeof(ll));
     scanf("%d", &new->data);

     for (int i=1; i<index-1; i++) {
          temp=temp->next;
     }
     new->next=temp->next;
     temp->next=new;
}


void delete_from_mid(int index){
     ll prev=NULL;
     ll temp=first;
     for (int i=1; i<index; i++) {
          prev=temp;   // following pointer
          temp=temp->next;
     }
     prev->next=temp->next;/*poining the prev pointer to temp next pointer so that this will skip the the temp */
     free(temp); /* freeing the temp variable*/
}


int main(void) {

/* calling 6 time create fxn to create a linked list*/
     create();
     create();
     create();
     create();
     create();
     create();

     insert_mid(4); /*insrting element at index 4 */
     print(first);
     printf("\n");
     delete_from_mid(8);/*deleting element from index 3*/
     print(first);


     return 0;
}
