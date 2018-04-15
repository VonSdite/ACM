#include <iostream>
#include <algorithm>
#include <string>
#include <cstring>

using namespace std;

long long p, y;

bool is_prime(long long num)
{
    for (long long i = 2; i * i <= num && i <= p; ++i)
    {
        if (!(num % i)) return false;
    }
    return true;
}

int main(int argc, char const *argv[])
{
    while (~scanf("%I64d %I64d", &p, &y))
    {
        long long ans;
        for (ans = y; ans > p; --ans)
        {
            if (is_prime(ans)) break;
        }
        if (ans == p) printf("-1\n");
        else printf("%I64d", ans);
    }
    return 0;
}