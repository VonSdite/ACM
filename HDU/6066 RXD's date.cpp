#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t, ans, tmp;
    while (~scanf("%d", &t))
    {
        ans = 0;
        for (int i = 0; i < t; ++i)
        {
            scanf("%d", &tmp);
            if(tmp <= 35) ++ans;
        }
        printf("%d\n", ans);
    }
    return 0;
}