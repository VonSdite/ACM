#include <iostream>
#include <vector>
using namespace std;

const int MAXN = 1299709;
int isprime[MAXN];
int prime[MAXN];
bool vis[MAXN];

void getPrime()
{
    for (int i = 2; i * i < MAXN; i++)
    {
        if (!vis[i])
        {
            isprime[i] = 1;
            for (int j = i; j < MAXN; j = j + i)
            {
                vis[j] = true;
            }
        }
    }
    for (int i = 2; i < MAXN; i++)
    {
        if (!vis[i])
        {
            isprime[i] = 1;
        }
    }
    int ji = 0;
    for (int i = 2; i < MAXN; i++)
    {
        if (isprime[i])
        {
            prime[ji] = i;
            ji++;
        }
    }
}

int main()
{
    getPrime();
    int n;
    vector<int>ans;
    while (~scanf("%d", &n))
    {
        ans.clear();
        for (int i = 0; i <= prime[i]; i++)
        {
            int x = prime[i];
            while (x <= n)
            {
                ans.push_back(x);
                x = x * prime[i];
            }
        }
        printf("%d\n", ans.size());
        for (int i = 0; i < (int)ans.size(); i++)
        {
            if (i)
                printf(" ");
            printf("%d", ans[i]);
        }
        printf("\n");
    }
    return 0;
}