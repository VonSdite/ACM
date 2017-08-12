#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    while (~scanf("%d", &t))
    {
        while (t--)
        {
            long long ans = 0;
            long long p;
            scanf("%I64d", &p);
            --p;
            for (long long i = 1; i * i <= p; ++i)
            {
                if (p % i == 0)
                {
                    ++ans;
                    if (i * i != p) ++ans;
                }
            }
            printf("%I64d\n", ans);
        }
    }
    return 0;
}