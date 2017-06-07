#include <bits/stdc++.h>

using namespace std;

const int SIZE = 2e6;
int w[SIZE];
int r[SIZE];

int main(int argc, char const *argv[])
{
    int n, cnt;
    while (~scanf("%d", &n))
    {
        memset(r, 0, sizeof(r));
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &w[i]);
            ++r[w[i]];
        }
        for (int i = 0; i < SIZE; ++i)
        {
            if(r[i])
            {
                r[i+1] += r[i]/2;
                r[i] &= 1;
            }
        }
        cnt = 0;
        for (int i = 0; i < SIZE; ++i)
        {
            if(r[i]) ++cnt;
        }
        printf("%d\n", cnt);
    }
    return 0;
}