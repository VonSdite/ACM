#include <bits/stdc++.h>

using namespace std;

#define LL long long

const LL p = 1e9+7;
const int SIZE = 1e3+5;
LL n, m;
  
LL quick_mod(LL a, LL b)  
{  
    LL ans = 1;  
    a %= p;  
    while(b)  
    {  
        if(b & 1)  
        {  
            ans = ans * a % p;  
            b--;  
        }  
        b >>= 1;  
        a = a * a % p;  
    }  
    return ans;  
}  
  
LL C(LL n, LL m)  
{  
    if(m > n) return 0;  
    LL ans = 1;  
    for(int i=1; i<=m; i++)  
    {  
        LL a = (n + i - m) % p;  
        LL b = i % p;  
        ans = ans * (a * quick_mod(b, p-2) % p) % p;  
    }  
    return ans;  
}  
  
LL Lucas(LL n, LL m)  
{  
    if(m == 0) return 1;  
    return C(n % p, m % p) * Lucas(n / p, m / p) % p;  
}  

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        scanf("%I64d %I64d", &n, &m);
        LL MAX = max(n, m);
        LL MIN = min(min(n, m), MAX-min(n, m));
        printf("%I64d\n", Lucas(MAX, MIN)); 
    }
    return 0;
}