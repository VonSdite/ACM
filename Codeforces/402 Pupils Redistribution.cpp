#include <iostream>
#include <cstring>
#include <algorithm>

using namespace std;

int a[6];
int b[6];

int main(int argc, char const *argv[])
{
    int n;
    int tmp;
    int ans;
    while (~scanf("%d", &n))
    {
        memset(a, 0, sizeof(a));
        memset(b, 0, sizeof(b));
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &tmp);
            ++a[tmp];
        }

        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &tmp);
            ++b[tmp];
        }

        ans = 0;
        for (int i = 1; i < 6; ++i)
        {
            tmp = a[i] + b[i];
            if (tmp & 1)
            {
                ans = 1;
                break;
            }
            else
            {
                ans += abs(tmp / 2 - a[i]);
            }
        }

        if (ans & 1) printf("-1\n");
        else printf("%d\n", ans / 2);
    }
    return 0;
}