#include <bits/stdc++.h>
using namespace std;

struct node {
     int data;
     struct node * next;
};

typedef  struct node *ll;

ll first, la,temp;

void push(int c){
     temp= (ll)malloc(sizeof(ll));
     temp->data= c;
     temp->next=NULL;
     if (first==NULL) {
          first=la=temp;
     }else{
          la->next=temp;
          la=temp;
     }
}
int c=10;

void print(ll temp){
     while (temp && c--) {
          cout<<temp->data<<" ";
          temp=temp->next;
     }
}
int n=0;
void insert( int index){

//     if ( index<0 || index>n){
//          printf("not a valid index\n");
//     }

     ll temp = ( ll)malloc(sizeof(ll));
     ll run=first;

     scanf("%d", &temp->data);
     temp->next=NULL;

     if (index==0 ) {
          n++;
          if (first==NULL) {
               first=la=temp;
          }else{
               temp->next=first;
               first=temp;
          }
     }else{
          if (index==n-1) {
               la->next=temp;
               la=temp;
          }
          n++;
          for (int i=1; i<index-1; i++) {
               run=run->next;
          }
          temp->next=run->next;
          run->next=temp;
     }



}



int main()
{

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);


     freopen("/Users/harshanand/Desktop/C++ file/dsa_cp/input.txt", "r", stdin);
     freopen("/Users/harshanand/Desktop/C++ file/dsa_cp/output.txt", "w", stdout);


    


     int n;
     cin>>n;

     for (int i=0; i<n; i++) {
          insert(i);
     }


     print(first);




}
