#include <iostream>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n, k;
    int cnt = 1;
    while (~scanf("%I64d %I64d", &n, &k))
    {
        printf("Case #%d: ", cnt++);

        long long T = (n-1) * 2;

        if(k <= n)
        {
            printf("%I64d\n", k);
        }
        else
        {
            k -= n;
            k %= T;
            if(k == 0) printf("%I64d\n", n);
            else if(k <= n-1)
            {
                printf("%I64d\n", k);
            }
            else
            {
                k -= n-1;
                printf("%I64d\n", k);
            }
        }
    }
    return 0;
}