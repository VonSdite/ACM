#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
        int sum = 0; 
        int tmp;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &tmp);
            sum += tmp;
        }
        int m;
        scanf("%d", &m);
        int l, r;
        for (int i = 0; i < m; ++i)
        {
            scanf("%d %d", &l, &r);
            if(l >= sum)
            {
                printf("%d\n", l);
                return 0;
            }
            else if(sum >= l && sum <= r)
            {
                printf("%d\n", sum);
                return 0;
            }
        }
        printf("-1\n");
    return 0;
}