#include<iostream>
#include<stdio.h>
#include<string.h>
using namespace std;
int Precedence(char c){
     if (c=='^') return 5;
     if (c=='/') return 4;
     if (c=='*') return 4;
     if (c=='-') return 3;
     if (c=='+') return 3;
     return 0;
}
void infix_to_postfix(char *s){
     char stack_m[1000];
     int index=-1 ;
     for (int i=0; s[i] ; ++i) {
          if (s[i]=='(') {
               stack_m[++index]='(';
          }else if (s[i]==')'){
               while (stack_m[index]!='(')  cout<<stack_m[index--];
               index--;
          }else if (Precedence(s[i])!=0){
               while (index!=-1 and !(Precedence(s[i])>Precedence(stack_m[index]))) {
                    cout<<stack_m[index];
                    index--;
               }
               stack_m[++index]=s[i];
          }else cout<<s[i];
     }
     while (index!=-1) {
          cout<<stack_m[index--];
     }
}
int main()
{
    char infixExp[50];
    infix_to_postfix("A+(B*C)");
    cout<<"\n";
    infix_to_postfix("A+(B*C-(D/E^F)*G)*H");
    return 0;
}