/*     // Quick sort in C

 #include <stdio.h>

 // function to swap elements
 void swap(int *a, int *b) {
 int t = *a;
 *a = *b;
 *b = t;
 }

 int par(int arr[], int l,int h){
 int i=l;
 int piv=arr[h];
 for (int j=l; j<h; ++j) {
 if (arr[j]<=piv) {
 swap(&arr[i++], &arr[j]);
 }
 }
 swap(&arr[i], &arr[h]);
 return i;
 }
 void qs( int *arr, int l,int h){
 if (l<h) {
 int mid=par(arr, l, h);
 qs(arr, l, mid-1);
 qs(<#int *arr#>, <#int l#>, <#int h#>)
 }
 }



 void printArray(int array[], int size) {
 for (int i = 0; i < size; ++i) {
 printf("%d  ", array[i]);
 }
 printf("\n");
 }

 // main function
 int main(void) {
 int data[] = {8, 7, 2, 1, 0, 9, 6};

 int n = sizeof(data) / sizeof(data[0]);

 printf("Unsorted Array\n");
 printArray(data, n);

 // perform quicksort on data
 quickSort(data, 0, n - 1);

 printf("Sorted array in ascending order: \n");
 printArray(data, n);
 }
 */
     //#include <stdio.h>
     //int precidence(char c){
     //     if (c=='^') return 4;
     //     if (c=='/') return 3;
     //     if (c=='*') return 3;
     //     if (c=='+') return 2;
     //     if (c=='-') return 2;
     //     return 0;
     //}
     //void ckh( char *arr){
     //     char stack[100],ansArray[100];
     //     int index=0,i=0,k=0;
     //     while (arr[i]) {
     //          if (precidence(arr[i])==0) {
     //               ansArray[k++]=arr[i++];
     //          }else{
     //               if (precidence(arr[i]) > precidence(stack[index])) {
     //                    stack[++index] =arr[i++]; //if precidece is greater
     //               }else{
     //                    ansArray[k++]=stack[index--];
     //               }
     //          }
     //     }
     //     while (index!=-1) {
     //          ansArray[k++] =stack[index--];
     //     }
     //     ansArray[k++]= '\0';
     //     for (int i=0; ansArray[i]; i++) {
     //          printf("%c",ansArray[i]);
     //     }
     //}
     //
     //int bracket(char c){
     //     if (c=='(') return 1;//0
     //     if (c==')') return 2;//1
     //     if (c=='{') return 3;//2
     //     if (c=='}') return 4;//3
     //     if (c=='[') return 5;//4
     //     if (c==']') return 6;//5
     //     else return 0;
     //}
     //void pranthesis( char *s){
     //     int stack[100],j=1;
     //     stack[0]=bracket(s[0]);
     //     for (int i=1; s[i]; ++i) {
     //          if (!bracket(s[i]))  continue;
     //          if (stack[j-1] - bracket(s[i])==-1) {
     //               j--;
     //          }else{
     //               stack[j++]= bracket(s[i]);
     //          }
     //     }
     //          // if j==0 balanced else not
     //     printf(j?"fuck no\n":"balanced\n");
     //}
     //
     //
     //int main(void){
     //
     //     char arr[]="a+b*c";
     //     ckh(arr);
     //     printf("\n");
     //}
     // C program to Implement Ping

     // compile as -o ping
     // run as sudo ./ping <hostname>

#include <stdio.h>
#include<sys/types.h>
#include<sys/socket.h>
#include<netinet/in.h>
#include<arpa/inet.h>
#include<netdb.h>
#include<unistd.h>
#include<string.h>
#include<stdlib.h>
#include<netinet/ip_icmp.h>
#include<time.h>
#include<fcntl.h>
#include<signal.h>
#include<time.h>

int main(void){
     char * host= (char*)gethostbyname("8.8.8.8");
     if (host==NULL) {
          perror("not found\n");;
     }else{
          printf("success\n %s\n", host);

     }
}
