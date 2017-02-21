#include <stdio.h>
#include <string.h>
#include <stdbool.h>

#define clr(ar) memset(ar, 0, sizeof(ar))

char visited[1010][10];
int n, ar[1010], dp[1010][10];

int F(int i, int l)
{
    if (i == n) return 0;
    if (visited[i][l]) return dp[i][l];

    int x, res = 1 + F(i + 1, 0);
    if (ar[i] == 0) res = 1 + F(i + 1, ar[i]);
    if ((ar[i] == 1 || ar[i] == 3) && l != 1)
    {
        x = F(i + 1, 1);
        if (x < res) res = x;
    }
    if ((ar[i] == 2 || ar[i] == 3) && l != 2)
    {
        x = F(i + 1, 2);
        if (x < res) res = x;
    }

    visited[i][l] = 1;
    return (dp[i][l] = res);
}

int main()
{
    int i;
    while (scanf("%d", &n) != EOF)
    {
        for (i = 0; i < n; i++) scanf("%d", &ar[i]);
        clr(visited);
        printf("%d\n", F(0, 0));
    }
    return 0;
}