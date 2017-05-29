#include <bits/stdc++.h>

using namespace std;

int main()
{
    long long a, b;
    while (~scanf("%I64d %I64d", &a, &b))
    {
        if(a<b) puts("-1");
        else printf("%.12f\n", (a+b)/(2.*((a+b)/(2*b))));
    }
    return 0;
}