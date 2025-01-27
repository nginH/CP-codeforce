#include <bits/stdc++.h>

using namespace std;

struct node
{
    int data;
    struct node * next;
};

typedef struct node * ll;

ll first, last;
void create(void){
    ll temp=(ll) malloc(sizeof(ll));
    cin>>temp->data;
    temp->next=NULL;
 
 if (!first){
    first=last=temp;
 }else{
     last->next=temp;
     last=temp;
    }
}

void print(ll temp){
    while (temp)
    {
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    
}



 int main(int argc, char const *argv[])
{
    int n;
    cin>>n;
    while (n--)
    {
      create();
    }

    print(first);
    
    return 0;
}


