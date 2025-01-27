//
//  main.c
//  stack1
//
//  Created by Harsh Anand on 12/09/2023.
//

#include <stdio.h>
#include <math.h>
#include <stdlib.h>


struct node {
     int data;
     struct node * next;
};

typedef struct node *stackk;
stackk first, top, temp, run;

int main(void){
     int ch;
     printf("stack using LL");
     int n=200;
     first= NULL;
     top=NULL;

     while (n--) {

          printf("1. push");
          printf("2. pop");
          printf("3. display");
          printf("4. exit");
          printf("enter your choice");
          scanf("%d", & ch);
          switch (ch) {
               case 1:
                    if (first==NULL) {
                         temp= (stackk)malloc(sizeof(stackk));
                         printf("enter a data: ");
                         scanf("%d", &temp->data);
                          temp->next=NULL;
                         first=top=temp;
                    }else{
                         temp= (stackk)malloc(sizeof(stackk));
                         temp->next= top;
                         top=temp;
                    }
               case 2:
                    if (first) {
                         printf("stack under flow");
                    }else{
                         if (first==top) {
                              printf("%d is freed ", top->data);
                              free(first);
                              first=top=NULL;
                         }else{
                              temp=top;
                              top=top->next;  // top -> next NULL
                              free(temp);
                         }
                    }
                    break;
               case 3:

                    if (!first) {
                         printf("stack is empty");
                    }else{
                         temp=first;
                         while (temp) {
                              printf(" %d ", temp->data);
                              temp=temp->next;
                         }
                    }

                    break;

               default:
                    return 0;
                    break;
          }
     }
}
