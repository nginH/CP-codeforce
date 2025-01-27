#include<iostream>
#include "queuee.h"
using namespace std;

//first in first out//
struct tree_node *root= nullptr;

void TreeCreate(){
     struct tree_node *p, *t;
     int x;
     linked_list q;
     root=(struct tree_node*) malloc(sizeof (struct tree_node));
     root->data = x;
     root->left = root->right = nullptr;
     enqueue(root);
}




int main() {

     return 0;
}
