#include <bits/stdc++.h>

using namespace std;

int a[105];

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            if(a[i] || (!a[i] && i && a[i-1] && i != n-1 && a[i+1] && cnt))
            {
                ++cnt;
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}