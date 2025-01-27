//
//  main.cpp
//  queue
//
//  Created by Harsh Anand on 26/10/2023.
//
#include <iostream>

using namespace std;
class queue {
private:
     int front;
     int rear;
     int size;
     int *Q;

public:
     queue(){
          front=rear=-1;
          size=10;
          Q=new int[size];
     }
     queue(int size){
          front = rear=-1;
          this->size=size;
          Q=new int[size];
     }
        void enqueue(int x);
          int dequeue ();
          void display();

};
void queue::enqueue(int x){
     if (rear==size-1) {
          cout<<"queue is full\n";
     }else{
          Q[++rear]=x;
     }
}


int queue::dequeue(){
     int x=-1;
     if (rear==front) {
          printf("Queue is empty\n");
     }else{
          x=Q[front+1];
          front++;
     }
     return x;
}
void queue::display(){
     for (int i=front+1; i<=rear; ++i) {
          cout<<Q[i]<<" ";
     }
     cout<<endl;
}


int main(void){



     q.display();
}









