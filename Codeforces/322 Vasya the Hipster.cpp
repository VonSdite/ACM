#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    while (~scanf("%d %d", &a, &b))
    {
        int a1 = min(a,b);
        a -= a1;
        b -= a1;
        int a2 = max(a,b);
        printf("%d %d\n", a1, a2>>1);
    }
    return 0;
}