#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    int ans, mn;
    while (~scanf("%d %d", &a, &b))
    {
        ans = 1;
        mn = min(a, b);
        while (mn)
        {
            ans *= mn;
            --mn;
        }
        printf("%d\n", ans);
    }
    return 0;
}