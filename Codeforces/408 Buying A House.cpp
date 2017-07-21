#include <iostream>

using namespace std;

const int SIZE = 105;
const int MAX = 1e8;
int housePrice[SIZE];

int main(int argc, char const *argv[])
{
    int n, m, k;
    while (~scanf("%d %d %d", &n, &m, &k))
    {
        for (int i = 1; i <= n; ++i)
        {
            scanf("%d", &housePrice[i]);
            if (0 == housePrice[i])
            {
                housePrice[i] = MAX;
            }
        }

        int rDis = 0, lDis = 0;

        for (int i = m + 1; i <= n; ++i)
        {
            ++rDis;
            if (housePrice[i] <= k)
            {
                break;
            }
            if(i == n) rDis = MAX;
        }

        for (int i = m - 1; i >= 1; --i)
        {
            ++lDis;
            if (housePrice[i] <= k)
            {
                break;
            }
            if(i == 1) lDis = MAX;
        }
        if(0 == lDis) lDis = MAX;
        if(0 == rDis) rDis = MAX;
        printf("%d\n", (lDis < rDis) ? lDis * 10 : rDis * 10);
    }
    return 0;
}