#include <iostream>

using namespace std;

long long result(long long a, long long b)
{
    return (a+1)*a/2*(b+1) + (b+1)*b/2*(a+1);
}

int main(int argc, char const *argv[])
{
    long long m, b;
    while (~scanf("%I64d %I64d", &m, &b))
    {
        long long ans = 0;
        for (long long y = b; y >= 0; --y)
        {
            long long x = (b-y)*m;
            ans = max(ans, result(x, y));
        }
        printf("%I64d\n", ans);
    }
    return 0;
}