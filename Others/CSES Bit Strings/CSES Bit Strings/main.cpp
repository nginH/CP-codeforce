//
//  main.cpp
//  CSES Bit Strings
//
//  Created by Harsh Anand on 09/10/2023.
//

#include <bits/stdc++.h>
using namespace std;
using namespace chrono;
#define H_A code by Harsh Anand




#define ll long long int
const ll MOD = 1e9 + 7;

ll powerLL(ll x, ll n)
{
     ll result = 1;
     while (n) {
          if (n & 1)
               result = result * x % MOD;
          n = n / 2;
          x = x * x % MOD;
     }
     return result;
}

ll powerStrings(string sa, string sb)
{
     ll a = 0, b = 0;
     for (int i = 0; i < sa.length(); i++)
          a = (a * 10 + (sa[i] - '0')) % MOD;
     for (int i = 0; i < sb.length(); i++)
          b = (b * 10 + (sb[i] - '0')) % (MOD - 1);

     return powerLL(a, b);
}

int main()
{


     ios_base::sync_with_stdio(false);
     cin.tie(NULL);

     string sa = "2", sb;
     cin>>sb;
     cout << powerStrings(sa, sb) << endl;
     return 0;
}



