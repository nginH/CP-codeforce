//
//  main.cpp
//  stack_implementation_using_array
//
//  Created by Harsh Anand on 15/10/2023.
//

#include <iostream>
using namespace std;

struct stack {
     int size;
     int top;
     int *s;
};

void push( stack *st, int x){
     if (st->top== st->size-1) {
          cout<<"stack overflow\n";
     }else{
          st->top++;
          st->s[st->top]=x;
     }
}

int pop( stack *st){
     int x=-1;
     if( st->top==-1){
          cout<<"stack underflow\n";
     }else{
          x=st->s[st->top];
          st->top--;
     }
     return x;
}

int peek(stack st, int position){
     int x=-1;
     if (st.top - position +1<0) {
          cout<<" invilid index\n";
     }else{
          x= st.s[st.top-position+1];
     }
     return x;

}



int pricidence(char c){
     if (c=='+' ||  c=='-') return 1;
     if (c=='*' ||  c=='/') return 2;
     if (c=='(' ||  c==')') return 3;
     if (c=='^') return 4;

     return 0;
}

int operator_check( char c){
     if (c =='+' ||  c =='-' || c =='*' ||  c=='/') return false;
         else return true;
}


char * check( char * infix){
     char * postfix;
     uint64_t len= strlen(infix);
     postfix= (char *)malloc((len+1)*sizeof(char));
     int i=0,j=0;
     while (infix[i] != '\0') {
          <#statements#>
     }


     return postfix;
}


int32_t main(void){

    stack st;
     printf("enter a size : ");
     cin>>st.size;
     st.s=new int[st.size];
     st.top=-1;









     return 0;
}
