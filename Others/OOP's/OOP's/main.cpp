//
//  main.cpp
//  OOP's
//
//  Created by Harsh Anand on 01/04/2024.
//
#include <climits>
#include <map>
#include <iostream>
using namespace std;

int main(){
     int n;
     cout<<"enter number: ";
     cin>>n;
     for (int i=0; i<=n; ++i) {
          cout<<i<<" ";
     }
     cout<<"\n";
}


//int main(){
//     map<int, int>mp;
//     cout<<"enter size: ";
//     int n ;
//     cin>>n;
//     for (int i=0; i<n; ++i) {
//          int x;
//          cin>>x;
//          mp[x]++;
//     }
//     int a=INT_MIN,b=0;
//     for (auto x : mp) {
//          if(a<x.second){
//               a=x.second;
//               b=x.first;
//          }
//     }
//     cout<<"max occured element is "<< b<<"\n";
//}


/*
 push
 pop
 peek top
 isEmpty// bool
 size
 clear
 search

 list in first out

 */

// stack using linked list


//class stack {
//     int top;
//public:
//     int a[1000];
//     stack(){
//          this->top=-1;
//     }
//     void push( int);
//     int pop();
//     int peek();
//     bool isEmpty();
//
//};
//
//
//void stack::push( int data){
//     a[++top]=data;
//}
//
//int stack::pop(){
//     if(top!=-1)
//     return a[top--];
//     else{
//          cout<<"stack underflow\n";
//          return -1;
//     }
//}
//
//int stack::peek(){
//     if(top!=-1){
//          return a[top];
//     }else{
//          cout<<"no element to pop";
//          return -1;
//     }
//}
//
//bool stack::isEmpty(){
//     return top<0;
//}
//
//int main(){
//     class stack s;
//     s.push(1);
//     s.push(2);
//     s.push(3);
//     s.push(4);
//
//     cout<<s.pop()<<"\n";
//     cout<<s.pop()<<"\n";
//     cout<<s.pop()<<"\n";
//     cout<<s.pop()<<"\n";
//     cout<<s.pop()<<"\n";
//     cout<<s.peek()<<"\n";
//
//}
//
//
//
//
