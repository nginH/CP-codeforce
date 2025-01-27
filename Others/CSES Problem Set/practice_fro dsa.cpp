//
// Created by Harsh Anand on 06/12/2023.
//

//
//  main.cpp
//  DSA practice for exam
//
//  Created by Harsh Anand on 05/12/2023.
//

/*

 singly list☑️ /doubly / circular done
 stack ( implementation using array ) pranthesis check/ bracket check☑️
 infix to postfix ☑️
 queue(enqueue dequeue)☑️
 sorting{
 bubble☑️
 insertion☑️
 selection☑️
 pop sort☑️
 quick sorting☑️

*/
//}
#include <iostream>
#include <stdio.h>
#include <bits/stdc++.h>
#include <bits/debug.h>
using namespace std;

static int SIZE=0;

struct node  {
     int data;
     struct node * next;
     node(int x){  // constructor
          this->data=x;
          this->next=NULL;
     }
}*head, *tail;


void pushback( int x){ // constant time insertion O(1)
     debug(x);
     SIZE++;
     node * temp= new node(x);
     if (!head) {
          head=tail=temp;
     }else{
          tail->next=temp;
          tail=temp;
     }
}

void enqueue( int x){  // queue operation
     debug(x);           //constant time operation
     SIZE++;
     node * temp= new node(x);
     if (!head) {
          head=tail=temp;
     }else{
          tail->next=temp;
          tail=temp;
     }
}
/*---------*/

void print(node *temp){ // linear time
     if (SIZE>0) {
          while (temp) {
               cout<<temp->data<<" ";
               temp=temp->next;
          }
          cout<<"\n";
     }else{
          cerr<<"invalid\n";
          return;
     }

}

/*---------*/

void create( int x){ // create linked list;
     while (x--) {
          int n;
          cin>>n;
          pushback(n);// calling push back fxn repetedly
     }
}
/*---------*/

void  push(int x){  //stack push
     SIZE++;
     node *temp= new node(x);
     if (!head) {
          head=tail=temp;
     }else{
          temp->next=head;
          head=temp;
     }
}


/*---------*/
// stack operation

void pop(void){ //O(n) time taken as i have to triverse through whole linked list;
     if (SIZE<1) {
          cerr<<"no head\n"; // error
          return;

     }else if( SIZE ==1){
          free(head);
          SIZE--;
     }else{
          node * temp= head;
          for (int i=0; i<SIZE-2; ++i) {
               temp=temp->next;
          }
          node *x= temp->next;
          tail=temp;
          tail->next=NULL;
          free(x);  // not compalsary(but abhilash sir check kare tho compalsary  actually compilar automatically free the unused heap memory  ( memory management );
          SIZE--;
     }
}
/*---------*/
void popfront(void){ //O(n) time taken as i have to triverse through whole linked list;
     if (SIZE<1) {
          cerr<<"no head\n"; // error
          return;
     }else if( SIZE ==1){
          SIZE--;
          free(head);
     }else{
          SIZE--;
          node * x= head;
          head=head->next;
          free(x);
     }
}

void dequeue(void){ //O(n) time taken as i have to triverse through whole linked list;
     if (SIZE<1) {
          cerr<<"queue is empty\n"; // error
          return;
     }else if( SIZE ==1){
          SIZE--;
          free(head);
     }else{
          SIZE--;
          node * x= head;
          head=head->next;
          free(x);
     }
}
/*---------*/

void insert(int x, int index){  // insert at index  // O(n)
     if (!head or index > SIZE or index<0) {
          cerr<<"invalid index\n";
     }else if(index==0){
          push(x);
     }else if (index == SIZE){
          pushback(x);
     }else{
          SIZE++;
          node * temp= new node(x);
          node * x=head;
          for (int i=0; i<index-1; ++i) {
               x=x->next;
          }
          temp->next=x->next;
          x->next=temp;
     }
}
/*---------*/
void del(int index){  // delete at index
     if (!head or index > SIZE or index<0) {
          cerr<<"invalid index\n";
     }else if(index==0){
          popfront();
     }else if (index== SIZE){
          pop();
     }else{
          SIZE--;
          node * temp=nullptr;
          node * x=head;
          for (int i=0; i<index-1; ++i) {
               temp=x;
               x=x->next;
          }
          temp->next=x->next;
          free(x);
     }
}
/*---------*/
// check pranthesis //

int bracket(char c){
     if (c=='(') return 1;//0
     if (c==')') return 2;//1
     if (c=='{') return 3;//2
     if (c=='}') return 4;//3
     if (c=='[') return 5;//4
     if (c==']') return 6;//5
     else return 0;
}
void pranthesis( string s){
     int ans[100];
     ans[0]=bracket(s[0]);
     int j=1;
     for (int i=1; s[i]; ++i) {
          if (!bracket(s[i])) {
               continue;
          }
          if (ans[j-1] - bracket(s[i])==-1) {
               j--;
          }else{
               ans[j++]= bracket(s[i]);
          }
     }
     // if j==0 balanced else not
     printf(j?"fuck no\n":"balanced\n");
}
/*--------------*/


// infix to postfix

int Precedence(char c){
     if (c=='^') return 5;
     if (c=='/') return 4;
     if (c=='*') return 4;
     if (c=='-') return 3;
     if (c=='+') return 3;
     return 0;
}
void infix_to_postfix(string s){
     char stack_m[1000];
     int index=-1 ;
     for (int i=0; s[i] ; ++i) { //
          if (s[i]=='(') {
               stack_m[++index]='(';
          }else if (s[i]==')'){
               while (stack_m[index]!='(')  cout<<stack_m[index--];
               index--;
          }else if (Precedence(s[i])!=0){
               while (index!=-1 and !(Precedence(s[i])>Precedence(stack_m[index]))) {
                    cout<<stack_m[index];
                    index--;
               }
               stack_m[++index]=s[i];
          }else cout<<s[i];
     }
     while (index!=-1) {
          cout<<stack_m[index--];
     }
}
/*------------*/
//sorting
void swap(int * a, int *b){
     int c=*a;
     *a=*b;
     *b=c;
}

//bubble sort//
void bubble(int *a, int n){
     for (int i=0; i<n; ++i) {
          for (int j=0; j<n; ++j) {//overall (worst case(O(n^2);
               if (a[i]<a[j]) {
                    swap(&a[i], &a[j]);
               }
          }
     }
}

// insertion sort
void insertion_sort(int *arr, int n){//overall (worst case(O(n^2);
     int i=0,j=0,k;
     for (; i<n; ++i) {
          j=i-1;
          k=arr[i];
          while (j>-1 and arr[j]>k) { // but best case complaxity will we linear;
               arr[j+1]=arr[j];
               j--;
          }
          arr[j+1]=k;
     }

}


/* merge sort*/
void merge(int *arr, int low, int mid, int high){
     int res[100];
     int i=low,j=mid+1, k=low;
     while (i<=mid and j<=high) { // O(n)
          if (arr[i]<arr[j]) {
               res[k++]=arr[i++];
          }else{
               res[k++]=arr[j++];
          }
     }
     for (; i<=mid; ++i) {
          res[k++]=arr[i];
     }
     for (; j<=high; ++j) {
          res[k++]=arr[j];
     }
     for (int i=low; i<=high; ++i) {
          arr[i]=res[i];
     }
}

void merge_sort(int * arr, int l, int h){
     if (l<h) {
          int mid=(l+h)/2;
          merge_sort(arr, l, mid);  // same as constructing binary serch tree // log(n)
          merge_sort(arr, mid+1,h); // same as constructing binary serch tree// log(n)
          merge(arr, l, mid, h);  // calling fxn for merege element O(n)
     }
}
/*----*/

/*selectio sort*/

void selection(int *a, int n){//overall (worst case(O(n^2);
     int i,j,k;
     for (i=0; i<n-1; ++i) {
          for (j=k=i; j<n; ++j) {
               if (a[j]<a[k]) {
                    k=j;
               }
          }
          swap(a[i], a[k]);
     }
}

/*-----*/
// quick sort
int partion(int *arr, int l , int h){
     int piv= arr[l];
     int i=0 , j=h;
     do {
          do{i++;} while(arr[i]<=piv);
          do{j--;} while(arr[j]>piv);
          if(i<j) swap ( arr[i] , arr[j]);
     } while (i<j);// O(n^2)
     swap(arr[l], arr[j]);
     return j; //new mid point


}



void Quick_sort(int * arr, int l, int h){ // overall (worst case(O(n^2);
     if (l<h) {
          int mid=partion(arr, l,h);
          merge(arr, l, mid, h); // calling fxn for merege element O(n^2)
          Quick_sort(arr, l, mid);   // same as constructing binary serch tree // log(n)
          Quick_sort(arr, mid+1,h);    // same as constructing binary serch tree// log(n)

     }
}
/*-----*/
struct treenode {
     int data;
     struct treenode*left;
     struct treenode*right;
     treenode(int x){
          this->data=x;
          this->left=nullptr;
          this->right=nullptr;
     }
};
int tree[1000];
void pushh( int x){
     static int i=0;
     tree[i++]=x;
}
void construct(int *arr, int l, int h){
     if (l<h) {
          int mid=(l+h)/2;
          construct(arr, l, mid);
          construct(arr, mid+1, h);
     }
}

void loop_in_LL(){

     if (!head) {
          printf("BSDK linked list empty hai\n");
          return;
     }
     node *follow_1sterp_chalne_wala_pointer=head;
     node* ahead_2_step_chalne_wala=head;

     do {
          if (ahead_2_step_chalne_wala==NULL or ahead_2_step_chalne_wala->next==NULL )  {
               printf("loop nhi hai guy'z\n");
               return;
          }
          follow_1sterp_chalne_wala_pointer=follow_1sterp_chalne_wala_pointer->next;// 1 step chal
          ahead_2_step_chalne_wala=ahead_2_step_chalne_wala->next->next; // 2 step chla
     } while (follow_1sterp_chalne_wala_pointer!=ahead_2_step_chalne_wala);

     printf("attention loop hai guy'z\n");


}



int main(int argc, const char * argv[]) {
     freopen("/Users/harshanand/Desktop/C++ file/DSA practice for exam/input.txt", "r", stdin);
     freopen("/Users/harshanand/Desktop/C++ file/DSA practice for exam/output.txt", "w", stdout);
     freopen("/Users/harshanand/Desktop/C++ file/DSA practice for exam/error.txt", "w", stderr);

     int n;
     scanf("%d", &n);
     create(n);
     print(head);
     loop_in_LL();
     head->next->next->next=head;// loop bana diya
     loop_in_LL();

     return 0;
}