//{ Driver Code Starts
// driver

#include <iostream>
#include <cstdlib>
using namespace std;

/* Linked list Node */
struct Node {
    int data;
    struct Node* next;
    Node(int x) {
         data = x;
         next = NULL;
    }
};

struct Node* buildList(int size)
{
     int val;
     cin>> val;

     Node* head = new Node(val);
     Node* tail = head;

     for(int i=0; i<size-1; i++)
     {
          cin>> val;
          tail->next = new Node(val);
          tail = tail->next;
     }

     return head;
}

void printList(Node* n)
{
     while(n)
     {
          cout<< n->data << " ";
          n = n->next;
     }
     cout<< endl;
}

Node* subLinkedList(Node* l1, Node* l2);

int main()
{


     int t;
     cin>>t;
     while(t--)
     {
          int n, m;

          cin>>n;
          Node* first = buildList(n);

          cin>>m;
          Node* second = buildList(m);

          Node* res = subLinkedList(first,second);
          printList(res);
     }
     return 0;
}

// } Driver Code Ends

void Reverse1(struct Node *p)
{
     int *A,i=0;
     struct Node *q=p;

     A=(int *)malloc(sizeof(int)*10000);
     while(q!=NULL)
     {
          A[i]=q->data;
          q=q->next;
          i++;
     }
     q=p;
     i--;
     while(q!=NULL)
     {
          q->data=A[i];
          q=q->next;
          i--;
     }
}

Node* subLinkedList(Node* l1, Node* l2) {
//     Reverse1 (l1);
//     Reverse1 (l2);
//
     //

     int32_t data1 =0;
     int32_t data2 = 0;

     Node *t1=l1;

     while (t1){
          data1 = data1 * 10 + (t1 -> data);
          t1=t1->next;
     }


     while (l2) {
          data2 = data2 * 10 + (l2 -> data);
          l2 = l2 -> next;

     }

//     Node *res = nullptr;
//     res->next=nullptr;

     cout << "\n" << data2;
     for(int i=0; i<5; ++i){
          cout<<"harsh Anand\n";
     }
     cout << "\n";
//     res->data=max((int)data1, (int)data2)-min((int)data1,(int)data2);


     return l1;

}

/*
 *
 *
 1
 4
 1 2 3 4
 2
 78 90

 */