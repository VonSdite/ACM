#include <bits/stdc++.h>

using namespace std;

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