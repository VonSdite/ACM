#include <iostream>
#include <cstring>

const int INF = 2e9;
const int SIZE = 1e6+5;

using namespace std;

int m[SIZE], L[SIZE];

int main()
{
    int n, x, maxi, mini, ch;
    while (~scanf("%d", &n))
    {
        maxi = 0, mini = INF, ch = -1;
        memset(m, 0, sizeof(m));
        memset(L, 0, sizeof(L));
        for (int i = 0; i < n; i++)
        {
            scanf("%d", &x);
            if (!m[x])
            {
                L[x] = i;
                ++m[x];
            }
            else m[x]++;
            if (m[x] > maxi)
            {
                maxi = m[x];
                mini = i - L[x] + 1;
                ch = L[x] + 1;
            }
            else if (m[x] == maxi && i - L[x] + 1 < mini)
            {
                mini = i - L[x] + 1;
                ch = L[x] + 1;
            }
        }
        printf("%d %d\n", ch, ch + mini - 1);
    }
    return 0;
}