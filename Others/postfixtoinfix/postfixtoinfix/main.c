#include<stdio.h>
#include<string.h>
#include <stdbool.h>
     // This function will check if op1 has higher precedence than op2
int isHigherPrecedence(char op1){
     int n1 = 0;
     if(op1 == '^') n1 = 4;
     if(op1 == '*' || op1 == '/') n1 = 3;
     if(op1 == '+' || op1 == '-') n1 = 2;
     if(op1 == '(') n1 = 1;
     return n1 ;
}
bool isOperator(char op){
     if(op == '+' || op == '-' || op == '^' || op == '%' || op == '/' || op == '*') return true;
     return false;
}

void infixToPostfix(char *str){

     int i, top = -1;
     char stack[50];

     printf("\nPostfix = ");
     for(i = 0; i < strlen(str); i++)
          {
          if(str[i] == '(')
               stack[++top] = '(';
          else if(str[i] == ')'){
               while(stack[top] != '(')
                    printf("%c", stack[top--]);
               top--;
               }
          else if(isOperator(str[i])){
               while(top != -1 && !(isHigherPrecedence(str[i])>isHigherPrecedence(stack[i]) ))
                    printf("%c", stack[top--]);
               stack[++top] = str[i];
               }
          else printf("%c", str[i]);
          }
     while(top != -1)
          printf("%c", stack[top--]);
}
int main(void){

     infixToPostfix("((a*b)+c)");
     printf("\n");
     return 0;
}
