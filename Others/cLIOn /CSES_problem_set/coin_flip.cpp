#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
int main() {
     ios_base::sync_with_stdio(false); // ignore( used for fast input)
     cin.tie(NULL);// ignore ( used for fast input)
     int test;
     cin >> test;
     while (test--) {  // test case
          int a, b;
          cin >> a >> b; // scanf("%d%d", &a,&b);
          while (a > 0 && b > 0) {  //brute force approch
               // time complexity will we  O(n)  and since the input size is 10^9
               // it'll give 	TIME LIMIT EXCEEDED // as loop will only run
               //10^8 instruction  per second 10^9 take 10 second for fully execution
               if (a >= b) {  // if first pile is greater number
                    // then sub 2 from first and 1 from second
                    a = (a - 2); //
                    b = (b - 1);
               } else {
                    // else vice versa
                    a = (a - 1);
                    b = (b - 2);
               }
          }
          // if we found both pile if empty(0) then ww print YES else NO
          cout << ((a == 0 && b == 0) ? "YES\n" : "NO\n"); //if(a==0 &&b==0) printf("YES\n");
          // else printf("NO\n")
     }
     return 0;
}




