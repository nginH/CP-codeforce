//
//  main.cpp
//  circular_linked_list
//
//  Created by Harsh Anand on 06/10/2023.
//

#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define H_A code by Harsh Anand

#define Inf 2147483647
#define Pi acos(-1.0)

#define pb(x) push_back(x)

#define  sc(x) cin>>x;
#define pt(x) cout<<x<<"\n";
#define debug(x)  cout << #x << " = "<< x << "\n";
#define debug_2(x,y) cout << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#define no cout<<"NO\n"
#define yes cout<<"YES\n"
#define br cout<< "\n" //yey html



string btos( string se){
     string s= bitset<32> (se).to_string();
     return s;
}

uint64_t s_to_d( string st){
     uint64_t number;
     number = strtoull(st.c_str (),NULL,2);
     return number;
}
struct node {
     int data;
     struct node * next;
}*first,*last;
typedef struct node * cll;



int len( cll temp){
     int length=0;
     do {
          ++length;
          temp=temp->next;
     } while (temp!=first);
     return length;
}


void instert_cll(int index, int input){

     if( index<0 || index>len(first)){
          cout<<"not a valid index";
     }
     if(index==0){
          struct node *t=(cll)malloc(sizeof(cll));
          t->data=input;
          if (first==NULL) {
               t->next=t;
               first=t;
          }else{
               t->next=first;
          }
     }else{
          struct node *t=(cll)malloc(sizeof(cll));
          t->data=input;
          cll run=first;
          for (int i=0; i<index-1; ++index) {
               run=run->next;
          }
          t->next=run->next;
          run->next=t;
     }
}
void c_print(cll temp){
     do {
          cout<<temp->data<<"  ";
          temp=temp->next;
     } while (temp!=first);
}







int main(){
     
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/circular_linked_list/circular_linked_list/input.txt","r",stdin);
     freopen("/Users/harshanand/Desktop/C++ file/circular_linked_list/circular_linked_list/output.txt", "w", stdout);
#endif

     int n;
     cin>>n;

     while (n--) {
          int x;
          cin>>x;
          instert_cll(0, x);
     }

     c_print(first);



     return 0;
}


