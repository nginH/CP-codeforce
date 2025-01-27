

#include <stdio.h>

#include <stdlib.h>
#include <math.h>
#include <time.h>
#include <stdbool.h>
#include <string.h>


#define inout  freopen("/Users/harshanand/Desktop/C++ file/satyam_linked list/input.txt","r",stdin);  freopen("/Users/harshanand/Desktop/C++ file/satyam_linked list/output.txt", "w", stdout);
#define new (linked)malloc(sizeof(linked))

struct node {
     int data;
     struct node *next;
};

typedef struct node *linked;
linked first, last, temp, run, temp2,run2;

void print(linked temp , int n){
     while (temp!=NULL ) {
          printf("%d ", temp->data);
          temp=temp->next;

     }

}
int count=0;


void create(void){
     int n;
     scanf("%d",&n);
     first=(linked)malloc(sizeof(linked));
     scanf("%d", &first->data);
     first->next=NULL;
     last=first;
     n--;
     count++;
     while (n--) {
          temp=(linked)malloc(sizeof(linked));
          scanf("%d", &temp->data);
          temp->next=NULL;
          last->next=temp;
          last=temp;
          count++;
     }
}



void insert(void){
     temp= new;
     temp->data= 2413;
     temp->next=first->next;
     first->next=temp;
}


void delete(int n){
     run= (linked)malloc(sizeof(linked));
     run=first;
     run2= (linked)malloc(sizeof(linked));
     run2=first;
     int count=1;
     int x=n;
     x--;
     while (run2!=NULL && x--) {
          run2=run2->next;
     }

     while (run!=NULL && n--) {
          count++;
          run=run->next;
     }

    run2->next=run->next;
     free(run );




}

/*

struct node {
     int32_t data;
     struct node * next;
     struct node * prev;
};

typedef struct node *LLD;
LLD first , last , temp,run;



*/


int main(void){

#ifndef ONLINE_JUDGE
     inout;
#endif

     create();
     print(first, 0);
     printf(" SAMPLE PROGRAMER \n");



     return 0;







}


