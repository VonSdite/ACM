#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, a;
    while (~scanf("%d %d", &n, &a))
    {
        int ans = 3;
        double deg = 180.0 * (n - 2) / n;
        double ang = (180 - deg) / 2;
        double tmp;
        for (int i = 4; i <= n; i++)
        {
            tmp = (180.0 - deg) * (i - 2) / 2;
            if (abs(ang - a) > abs(tmp - a))
            {
                ang = tmp;
                ans = i;
            }
        }
        printf("2 1 %d\n", ans);
    }
    return 0;
}