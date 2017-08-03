#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5+5;
int a[SIZE];

int main(int argc, char const *argv[])
{
    int t, n;
    scanf("%d", &t);
    while (t--)
    {
        int cnt_1 = 0, cnt_0 = 0;
        scanf("%d", &n);
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
            if(a[i] & 1) ++cnt_1;
            else ++cnt_0;
        }
        if(cnt_1 > cnt_0) printf("2 1\n");
        else printf("2 0\n");
    }
    return 0;
}