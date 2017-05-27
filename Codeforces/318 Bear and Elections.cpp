#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1005;
int a[SIZE];

bool cmp(const int &a, const int &b)
{
    return a > b;
}

int main(int argc, char const *argv[])
{
    int n, cnt;
    while (~scanf("%d", &n))
    {
        cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        sort(a+1, a+n, cmp);
        while(!(a[0]>a[1]))
        {
            ++cnt;
            ++a[0];
            --a[1];
            if(n>2) sort(a+1, a+n, cmp);
        }
        printf("%d\n", cnt);
    }
    return 0;
}