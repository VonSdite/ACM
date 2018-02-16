#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int a, b, c;
    while (~scanf("%d", &n))
    {
        scanf("%d %d %d", &a, &b, &c);
        int MIN = min(min(a, b), c);

        --n;
        int res = 0;
        if (n >= 1)
        {
            res += min(a, b) + (n-1)*MIN;
        }

        printf("%d\n", res);
    }
    return 0;
}