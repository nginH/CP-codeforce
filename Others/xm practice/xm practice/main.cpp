#include <bits/stdc++.h>

struct node {
     int data;
     struct node *next;
}*first, *last;

void create(int data){
     struct node *temp= (struct node*)malloc(sizeof(struct node));
     temp->data=data;
     temp->next=nullptr;
     if(!first){
          first=last=temp;
     }else{
          last->next=temp;
          last=temp;
     }

}
void insert(int data){
    struct node * created= (struct node *)malloc(sizeof(struct node));
     created->data=data;
     node *p=first, *f=NULL;
     created->next=NULL;
     while (p->data<data && p->next) {
          f=p;
          p=p->next;
     }
     f->next=created;
     created->next=p;
}


void print(){
     node * t=first;
     while (t) {
          std::cout<<t->data<<" ";
          t=t->next;
     }
}
int32_t main(void){
     create(2);
     create(4);
     create(8);
     create(10);
     create(12);
     create(26);
     print();
     insert(6);
     printf("\n");
     print();
     printf("\n");
}
