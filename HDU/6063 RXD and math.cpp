#include <iostream>
#include <cmath>

using namespace std;

#define ll long long

const ll mod = 1e9+7;

void seeTable(); // 打表找规律

ll quickpower(ll n, ll k)
{
    ll ans = 1;
    n %= mod;
    while (k)
    {
        if(k & 1) ans = (ans * n) % mod;
        k >>= 1;
        n = (n*n) % mod;
    }
    return ans;
}

int main(int argc, char const *argv[])
{
    // seeTable();  // 打表可知, 其实求的就是n^k

    ll n, k;
    int cnt = 1;
    while (~scanf("%I64d %I64d", &n, &k))
    {
        printf("Case #%d: ", cnt++);
        printf("%I64d\n", quickpower(n, k));
    }
    return 0;
}


void seeTable()
{
    for(int n = 2; n < 6; ++n)
    {
        int k = 1;
        while (k < 11)
        {
            int nk = pow(n, k);
            int sum = 0;

            for (int i = 1; i <= nk; ++i)
            {
                int tmp = i;
                bool flag = true;
                for (int i = 2; tmp != 1; ++i)
                {
                    int cnt = 0; // 记录有多少个相同的素数
                    while (tmp % i == 0)
                    {
                        ++cnt;
                        if(cnt > 1) 
                        {
                            flag = false;
                        }
                        tmp /= i;
                    }
                }
                if(flag)
                { // 每个素数只出现一次
                    sum += (int)sqrt((double)nk/(double)i);
                }
            }
            printf("n=%-3d k=%-3d \t n^k=%-8d \t result=%d\n", n, k, nk, sum);
            printf("==============================================================\n");
            k++;
        }
    }
}