//
//  Apartments.cpp
//  CSES Problem Set
//
//  Created by Harsh Anand on 12/11/2023.
//

#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#ifndef ONLINE_JUDGE
#else
#define debug(x)
#define debug_2(x,y) cerr << #x<<" = " << x <<" "<< #y<< " = " << y <<"\n";
#endif

#define code by Harsh Anand

#define Inf 2147483647
#define Pi acos(-1.0)
#define no           cout<<"NO\n"
#define yes          cout<<"YES\n"
#define br           cout<< "\n"; //yey html


string btos( string se){
     string s= bitset<32> (se).to_string();
     return s;
}

uint64_t s_to_d( string st){
     uint64_t number;
     number = strtoull(st.c_str (),NULL,2);
     return number;
}

void String_match(string s, string match){
     for (int i=0; i<=s.size()-match.size(); ++i) {
          int j=0;
          for ( j=0; j<match.size(); ++j) {
               if (match[j]!=s[i+j]) {
                    break;
               }
          }
          if (j==match.size()) {
               cout<<"match found at index : "<< i<<"\n";
          }
     }
}

struct node {
     int data;
     struct node *next;
}*head, *tail;
void push(int x){
     struct node *temp=new node;
     temp->data=x;
     temp->next=nullptr;
     if (!head) {
          head=tail=temp;
     }else{
          tail->next=temp;
          tail=temp;
     }
}

void pop(void){
     if (!head) {
          return;
     }else{
          struct node *x= head;
          head=head->next;
          delete x;
     }
}


void solve(int n, int m , int k){

     vector<int > ppl(m), apt(n);

     for (int i=0; i<n; ++i) {
          cin>>apt[i];
     }
     for (int i=0; i<m; ++i) {
          cin>>ppl[i];
     }

     sort(ppl.begin(), ppl.end());
     sort(apt.begin(), apt.end());

     debug(ppl);
     debug(apt);
     int i=0,j=0,ans=0;
     while (i<m && j<n) {
          if (abs(ppl[i]-apt[j])<=k) {
               ans++;
               i++;
               j++;
          }else if(ppl[i]<apt[j]){
               i++;
          }else{
               j++;
          }
     }
     cout<<ans<<"\n";

//     debug(n) debug(m) ;debug(k)





     return;
}




int main(){

#ifndef ONLINE_JUDGE
     freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Set/input.txt", "r", stdin);
     freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Set/output.txt", "w", stdout);
     freopen("/Users/harshanand/Desktop/C++ file/CSES Problem Set/error.txt", "w", stderr);
     auto start = high_resolution_clock::now();

#endif



     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     int n,m,k;
     cin>>n>>m>>k;
     solve(n,m, k);



#ifndef ONLINE_JUDGE
     auto end = high_resolution_clock::now();
     std::chrono::duration<double> time=(end- start);
     milliseconds d= std::chrono::duration_cast<std::chrono::milliseconds>(time);
     cerr<<"\n"<<d.count()<<"ms\n";
#endif
     return 0;
}












     // To: MoM & DaD
     // One day.. i'll make you proud;


