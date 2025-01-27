     //
     //  main.cpp
     //  assignment_DSA
     //
     //  Created by Harsh Anand on 12/10/2023.
     //
/*
#include <stdio.h>


     // loop in circular linked list;

struct node {
     int data;
     struct node* next;
};

typedef struct node *Cll;

Cll first, last;

void create(void){
     Cll temp= new node;
     scanf("%d", &temp->data);
     temp->next=NULL;

     if (first==NULL) {
          first=last=temp;
     }else{
          last->next=temp;
          last=temp;
     }
}



void print(Cll p){
     while (p) {
          printf("%d ",p->data);
          p=p->next;
     }
}

bool loop_check(Cll t){
     Cll p=first;
     while (t) {
          t=t->next->next;
          p=p->next;
          if (p==t) {
               return true;
          }
     }
     return false;
}


void recursive_reverse( Cll  p , Cll temp){
     if (temp) {
          recursive_reverse(temp, temp->next);
          temp->next=p;
     }else{
          first=p;
     }
}

void itrative_reverse(Cll temp){
     node *prev=NULL, *mid=NULL;
     while (temp) {
          prev=mid;
          mid=temp;
          temp=temp->next;
          mid->next=prev;
     }
     first=mid;
}



void print_backword_recursive(Cll temp){
     if (temp) {
          print_backword_recursive(temp->next);
          printf("%d ", temp->data);
     }
}

void print_backward_iteration(node *ptr) {
     node *last, *current;
     last = NULL;

     while (ptr != last) {
          current = ptr;
          while (current -> next != last) {
               current= current -> next;
          }
          printf("%d ", current -> data);
          last = current;
     }
     printf("\n");

}






int main(void){

          //     freopen("/Users/harshanand/Desktop/C++ file/assignment_DSA/assignment_DSA/dick.in", "r", stdin);
          //     freopen("/Users/harshanand/Desktop/C++ file/assignment_DSA/assignment_DSA/dick.out", "w", stdout);


     int n;
     printf("enter size: ");
     scanf("%d", &n);
     printf("enter element: ");
     while (n--) {
          create();
     }


          // itrative_reverse(first);
          // printf("itrative reverse: ");
          // print(first);
          // recursive_reverse(NULL, first);
          // printf("\nrecursive reverse : ");
          // print(first);


     printf("\nitrative print in backword: ");
     print_backward_iteration(first);

     printf("recursive print in backword: ");
     print_backword_recursive(first);

     printf("\n");
          //             printf((loop_check(first)?"\nloop found \n" : "\nloop not found\n"));
          //     first->next->next->next->next=first;
          //             printf((loop_check(first)?"\nloop found \n" : "\nloop not found\n"));
          //        printf("\n");
}




 #include <iostream>

 using namespace std;
 int fib( int n ){
 if(n<=1){
 return n;
 }else{
 return  fib(n-1)+fib(n-2);
 }
 }



 int32_t main(void)
 {
 int n;
 cin>>n;

 for (int i=0; i<n; ++i) {
 cout<<fib(i)<<" ";
 }
 }

#include <iostream>
#include <stdio.h>
#include <stdlib.h>

using namespace std;

struct Node
{
     char data;
     struct Node *next;
}*top=NULL;
void push(char x)
{
     struct Node *t;
     t=(struct Node*)malloc(sizeof(struct Node));
     if(t==NULL)
          printf("stack is full\n");
     else
          {
          t->data=x;
          t->next=top;
          top=t;
          }

}
char pop()
{
     struct Node *t;
     char x=-1;

     if(top==NULL)
          printf("Stack is Empty\n");
     else
          {
          t=top;
          top=top->next;
          x=t->data;
          free(t);
          }
     return x;
}
void Display()
{
     struct Node *p;
     p=top;
     while(p!=NULL)
          {
          printf("%d ",p->data);  p=p->next;
          }
     printf("\n");
}
int isBalanced(char *exp) {
     int i;

     for(i=0;exp[i] ;i++)  {
          if(exp[i]=='(')  push(exp[i]);  else if(exp[i]==')')  {
               if(top==NULL)  return 0;  pop();
          }
     }
     if(top==NULL)
          return 1;
     else
          return 0;
}
int main()
{


     char exp[1000];
     fgets(exp , 1000, stdin);
     printf("%d \n",isBalanced(exp));
     return 0;
}
#include <iostream>
using namespace std;
class Node
{
public:
     int data;
     Node *next;
};
class LinkedList
{
private:
     Node *first;
public:
     LinkedList(){first=NULL;}  LinkedList(int A[],int n);  ~LinkedList();

     void Display();
     void Insert(int index,int x);  int Delete(int index);
     int Length();
};
LinkedList::LinkedList(int A[],int n) {
     Node *last,*t;
     int i=0;

     first=new Node;
     first->data=A[0];
     first->next=NULL;
     last=first;

     for(i=1;i<n;i++)
          {
               t=new Node;
               t->data=A[i];  t->next=NULL;  last->next=t;  last=t;
          }
}

LinkedList::~LinkedList() {
     Node *p=first;
     while(first)
          {
               first=first->next;  delete p;
               p=first;
          }
}
void LinkedList::Display() {
     Node *p=first;

     while(p)
          {
               cout<<p->data<<" ";  p=p->next;
          }
     cout<<endl;
}
int LinkedList::Length() {
     Node *p=first;
     int len=0;

     while(p)
          {
               len++;
               p=p->next;
          }
     return len;
}
void LinkedList::Insert(int index,int x) {
     Node *t,*p=first;

     if(index <0 || index > Length())  return;
     t=new Node;
     t->data=x;
     t->next=NULL;

     if(index==0)
          {
               t->next=first;
               first=t;
          }
     else
          {
               for(int i=0;i<index-1;i++)  p=p->next;
               t->next=p->next;
               p->next=t;
          }
}
int LinkedList::Delete(int index) {
     Node *p,*q=NULL;
     int x=-1;

     if(index < 1 || index > Length())  return -1;
     if(index==1)
          {
               p=first;
               first=first->next;
               x=p->data;
               delete p;
          }
     else
          {
               p=first;
               for(int i=0;i<index-1;i++)  {
                    q=p;
                    p=p->next;
               }
          q->next=p->next;
          x=p->data;
          delete p;
          }
     return x;
}
int main()
{
     int A[]={1,2,3,4,5};
     LinkedList l(A,5);

     l.Insert(3,10);

     l.Display();

     return 0;
}
*/
#include <stdio.h>
#include <stdlib.h>

int main(void){
     int n=5;
     int * c= ( int*) malloc(sizeof(int ) *n);

     for (int i=0; i<n; ++i) {
          scanf("%d", &c[i]);
     }
     for (int i=0; i<n; ++i) {
          printf("%d ", c[i]);
     }




}
