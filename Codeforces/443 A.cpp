#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e3+5;
int s[SIZE], d[SIZE];

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        int res;
        memset(s, 0, sizeof(s));
        memset(d, 0, sizeof(d));
        for (int i = 0; i < n; ++i)
        {
            scanf("%d %d", &s[i], &d[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            if (!i)
            {
                res = s[i];
            }
            else
            {
                while (s[i] <= res)
                {
                    s[i] += d[i];
                }
                res = s[i];
            }
        }
        printf("%d\n", res);
    }
    return 0;
}