//
//  main.cpp
//  binary_search_tree
//
//  Created by Harsh Anand on 17/10/2023.

#include <bits/stdc++.h>
using namespace std;

/*
struct tree {
     char data;
     struct tree* left;
     struct tree* right;
};
typedef struct tree *bst;
bst root;


bst create (bst ,char);
void PO( bst r);
void IO( bst);
void POO(bst);

int32_t main(void){
 

     int max , i ;
     char c;
     root=nullptr;
     cin>>max;
     cout<<"enter a value : ";
     for ( int i=1; i<=max; ++i) {
          cin>>c;
         root= create(root, c);
     }
     PO(root);
}



bst create ( bst r , char ch){
     bst temp;
     if( r == NULL){
          temp= (bst ) malloc(sizeof(bst));
          temp->data= ch;
          temp->right=NULL;
          temp->data=NULL;
          return  temp;
     }
     if(ch<r->data){
          r->left=create(r->left, ch);
          return r;
     }else{
          r->right= create(r->right, ch);
          return r;
     }


}


void PO(bst r){
     if(r){
          cout<<r->data<<" ";
          PO(r->left);
          PO(r->right);
     }
}

void POO( bst r){
     if( r){
          POO(r->left);
          POO(r->right);
          printf("%c ", r->data);
     }
}

void IO( bst r){
     if( r){
          IO(r->left);
          printf("%c ", r->data);
          IO(r->right);
          printf("%c ", r->data);

     }
}


*/
int main(int argc, char const *argv[])
{
     cout<<"hello world";
     return 0;
}
