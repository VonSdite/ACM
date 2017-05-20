#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int n;
    int min1, max1;
    int min2, max2;
    int min3, max3;
    int ans1, ans2, ans3;
    while (~scanf("%d", &n))
    {
        scanf("%d %d", &min1, &max1);
        scanf("%d %d", &min2, &max2);
        scanf("%d %d", &min3, &max3);
        ans1 = min(max1, n-min2-min3);
        ans2 = min(max2, n-ans1-min3);
        ans3 = min(max3, n-ans1-ans2);
        printf("%d %d %d\n", ans1, ans2, ans3);
    }
    return 0;
}