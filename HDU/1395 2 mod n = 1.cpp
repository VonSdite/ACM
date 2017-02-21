#include <iostream>

using namespace std;

int quickpow(int a,int k,int m)
{
    int ans=1;
    while(k)
    {
        if(k&1)
            ans=(ans*a)%m;
        a=(a*a)%m;
        k>>=1;
    }
    return ans;
}


int main(int argc, char const *argv[])
{
    int n;
    while(~scanf("%d", &n))
    {
        if(!(n & 1) || n == 1) printf("2^? mod %d = 1\n", n);
        else
        {
            int x = 1;
            while(quickpow(2, x, n) != 1)
            {
                ++x;
            }
            printf("2^%d mod %d = 1\n", x, n);
        }
    }
    return 0;
}