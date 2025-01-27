#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
// #define max(a,b) a>b?a:b;
/* int max(int a, int b){
      if(a>b)
           return a;
     return b;
  }
*/
int main() {
     ios_base::sync_with_stdio(false);
     cin.tie(NULL);
     int test;
     cin >> test;
     while (test--) {  // test case
          int a, b;
          cin >> a >> b; // scanf("%d%d", &a,&b);
               if (abs(a-b)<=(max(a,b))/2){  // if there difference is less then there
                    // max or min value of a or b by 2 then it's possible that pile become empty
                    if ((a+b)%3==0) {
                         cout<<"YES\n"; //printf("YES\n");
                         continue;
                    }
               }
               cout<<"NO\n";  //printf("NO\n")
          }
     return 0;
}




