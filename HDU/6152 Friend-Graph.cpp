#include <bits/stdc++.h>

using namespace std;

const int SIZE = 120;

int gg[SIZE][SIZE];

int inputInt()
{
    char c = getchar();
    while (c != '0' && c != '1') c = getchar();
    return c - '0';
}

int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);

    while (t--)
    {
        int n, tmp;
        scanf("%d", &n);

        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                tmp = inputInt();
                if (n <= 10)
                    gg[j][i] = gg[i][j] = tmp;
            }
        }

        if (n >= 10)
        {
            printf("Bad Team!\n");
            continue;
        }

        int ans = 1;
        for (int i = 1; i <= n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                for (int k = j + 1; k <= n; k++)
                {
                    int now = gg[i][j] + gg[j][k] + gg[i][k];
                    if (now == 0 || now == 3)
                        ans = 0;
                }
            }
        }
        if (ans != 0)
            printf("Great Team!\n");
        else
        {
            printf("Bad Team!\n");
            continue;
        }
    }
    return 0;
}