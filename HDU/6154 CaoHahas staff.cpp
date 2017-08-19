#include <bits/stdc++.h>

using namespace std;

const int MAX = 2e9;

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while (t--)
    {
        int s;
        scanf("%d", &s);
        int ans = MAX;
        int tmp = sqrt(s / 2);
        for (int i = max(1, tmp - 10); i <= tmp + 10; i++)
        {
            if (2 * i * i >= s)
                ans = min(ans, 4 * i);
            if (2 * i * (i + 1) >= s)
                ans = min(ans, 4 * i + 2);
            if (2 * i * i + i - 1 >= s)
                ans = min(ans, 4 * i + 1);
            if (2 * i * (i + 1) + i >= s)
                ans = min(ans, 4 * i + 3);
        }
        printf("%d\n", ans);
    }
    return 0;
}