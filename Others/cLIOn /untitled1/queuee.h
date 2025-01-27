//
// Created by Harsh Anand on 07/11/2023.
//

#ifndef UNTITLED1_QUEUEE_H_
#define UNTITLED1__QUEUEE_H_
//first in first out//
#include <iostream>
using namespace std;

struct tree_node {
     int data;
     struct node *left;
     struct node *right;
};


struct node {
     int data;
     struct node *next;
} *front= nullptr, *tail= nullptr;
typedef struct node* linked_list;

void enqueue(int x) {
     linked_list temp;
     temp = (linked_list) malloc(sizeof(linked_list));
     if (temp== nullptr) {
          perror("error to allocate memory from heap\n");
     }
     else {
          temp->data = x;
          temp->next = nullptr;
          if (!front) {
               front= tail = temp;
          } else {
               tail->next = temp;
               tail = temp;
          }
     }
}
// box->b2-> b3->NULL;

void  Display(){
     linked_list t = front;
     while (t){
          cout << t->data << "  ";
          t = t->next;
     }
     cout << "\n";
}



int dequeue() {
     int x=-1;
     linked_list temp;

     if (!front) {
          perror("queue is empty ");
          return -1;
     } else {
          x=front->data;
          temp = front;
          front = front->next;
          free(temp);
     }
     return x;
}


#endif //UNTITLED1__QUEUEE_H_
