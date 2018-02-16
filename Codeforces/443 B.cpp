#include <bits/stdc++.h>

using namespace std;

const int SIZE = 5e2+5;
int a[SIZE];

int main(int argc, char const *argv[])
{
    long long n, k;
    while (~scanf("%I64d %I64d", &n, &k))
    {
        int MAX = 0;
        long long pos = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
            if (MAX < a[i])
            {
                MAX = a[i];
                pos = (long long)i;
            }
        }

        if (pos <= k)
        {
            printf("%d\n", MAX);
        }
        else
        {
            long long cnt = 0;
            int res = a[0];
            for (int i = 1; i < n; ++i)
            {
                if(res > a[i])
                {
                    ++cnt;
                }
                else
                {
                    res = a[i];
                    cnt = 1;
                }
                if (cnt == k)
                {
                    break;
                }
            }
            printf("%d\n", res);
        }
    }
    return 0;
}