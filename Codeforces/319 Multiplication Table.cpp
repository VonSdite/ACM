#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, x, cnt;
    while (~scanf("%d %d", &n, &x))
    {
        cnt = 0;
        for (int i = 1; i <= n; ++i)
        {
            if(x%i==0 && x/i<=n)
            {
                ++cnt;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}