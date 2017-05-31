#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, t1, t2, cnt, ans;
    while (~scanf("%d", &n))
    {
        cnt = 1;
        ans = 1;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &t1);
            if(i) 
            {
                if(t1 < t2) cnt = 1;
                else ++cnt;
                ans = max(ans, cnt);
            }
            t2 = t1;
        }
        printf("%d\n", ans);
    }
    return 0;
}