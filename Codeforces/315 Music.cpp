#include <bits/stdc++.h>

using namespace std;
//假定放到未下载点时候用时x秒，那么（q-1)/q就是每秒下载的速度，（q-1)/q*x+s=x。那么x=q*s
//每次更新s，直到 s大于等于t
int main(int argc, char const *argv[])
{
    int t, s, q, cnt;
    while (~scanf("%d %d %d", &t, &s, &q))
    {
        cnt = 0;
        while (s < t)
        {
            s *= q;
            ++cnt;
        }
        printf("%d\n", cnt);
    }
    return 0;
}