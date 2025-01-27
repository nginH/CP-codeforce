//
//  main.c
//  OS
//
//  Created by Harsh Anand on 28/01/2024.
//

     // C program to demonstrate the working of #pragma startup
     // and #pragma exit

#include <stdio.h>
#include <stdlib.h>
void func1(void);
void func2(void);

#pragma startup func1

void __attribute__((constructor)) func1(void);
void __attribute__ ((destructor)) func2(void);

void func1(void) { printf("Inside func1()\n"); }
void func2(void) { printf("Inside func2()\n"); }

int main(void)
{
     printf("enter ")
     return 0;
}
