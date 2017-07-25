#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    long long n, k;
    while (~scanf("%I64d %I64d", &n, &k))
    {
        long long cnt;
        cnt = n / k;
        if(cnt & 1) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}