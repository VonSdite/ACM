#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int a1, a2, a3, a4, a5, a6;
    // freopen("1input.txt", "r", stdin);
    while (~scanf("%d %d %d %d %d %d", &a1, &a2, &a3, &a4, &a5, &a6))
    {
        printf("%d\n", (a2+a3+a4)*(a2+a3+a4)-a2*a2-a4*a4-a6*a6);
    }
    return 0;
}