     //
     //  main.cpp
     //  P. Josephus Problem I
     //
     //  Created by Harsh Anand on 28/10/2023.
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

struct  node{
     long long int data;
     struct node *next;
};

typedef struct node *circular_linked_list;

circular_linked_list head, tail;

void create( long long int n){
     n--;
     circular_linked_list temp= (circular_linked_list)malloc(sizeof(circular_linked_list));
     temp->data=1;
     temp->next= head;
     long long int x=1;
     head=tail=temp;
     while (n--) {
          x++;
          circular_linked_list temp=(circular_linked_list)malloc(sizeof(circular_linked_list));
          temp->data=x;
          temp->next=head;
          tail->next=temp;
          tail=temp;
     }
}

void print( circular_linked_list temp){
     long long int n=20;
     while (n--) {
          cout<<temp->data<<" ";
          temp=temp->next;
     }
}

void delete_node(long long int n){
     long long int x=0;
     circular_linked_list temp=head, follow=NULL;
     while (n-- ) {
          follow=temp;
          temp=temp->next;
               cout<<temp->data<<" ";
          x=temp->data;
          follow->next=temp->next;
          temp=temp->next;
     }
}


void numbertobinary(long long int x){
     vector<long long int> v;


     v.reserve(100);
     long long int ans= log2(x)+1;
    long long int ansf=ans;
     while (ans--) {
          v.push_back(x%2);
          x/=2;
     }

     v.pop_back();
     reverse(v.begin(), v.end());
     v.push_back(1);
     long long int sum=0;

     for(long long int x:v){
          sum+=powl(2, ansf-1)*x;
          ansf--;
     }
     br;
     cout<<sum;

}





int main(){

#ifndef ONLINE_JUDGE
               freopen("/Users/harshanand/Desktop/C++ file/P. Josephus Problem I/input.txt","r",stdin);
//               freopen("/Users/harshanand/Desktop/C++ file/P. Josephus Problem I/P. Josephus Problem I/temp.txt", "w", stdout);
     auto start = high_resolution_clock::now();

#endif

     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int test=0;
     cin>>test;


     while (test--) {
          long long int n=1;
          cin>>n;
          int64_t k;
          cin>>k;
          if (n==1) {
               cout<<n<<"\n";
               continue;;
          }
          if (n<=0) {
               cout<<"0\n";
               continue;
          }
          create(n);
          delete_node(k);
//          numbertobinary(n);
          br;
     }
//     br;
//     int x=16;
//     while (x--) {
//          int n=0;
//          cin>>n;
//          if (x<=1) {
//               cout<<"\n"<<x<<"\n";
//               continue;
//          }
//          numbertobinary(x);
//     }





#ifndef ONLINE_JUDGE
     auto end = high_resolution_clock::now();
     std::chrono::duration<double> time=(end- start);
     milliseconds d= std::chrono::duration_cast<std::chrono::milliseconds>(time);
     cout<<"\n"<<d.count()<<"ms\n";
#endif

     return 0;
}


