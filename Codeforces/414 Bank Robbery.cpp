#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b, c, tmp;
    int n, cnt;
    while (~scanf("%d %d %d", &a, &b, &c))
    {
        cnt = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &tmp);
            if(tmp > b && tmp < c) ++cnt;
        }
        printf("%d\n", cnt);
    }
    return 0;
}