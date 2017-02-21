#include <iostream>
#include <cstring>
using namespace std;
#define M 105

int dp[M][M], road[M][M], haha[M];
char a[M], b[M];

int main()
{
    int i, j, la, lb;
    while (~scanf ("%s%s", a, b))
    {
        la = strlen (a), lb = strlen (b);
        for (i = 0; i < la; i++)
            dp[i][0] = 0;
        for (j = 0; j < lb; j++)
            dp[0][j] = 0;
        memset (road, -1, sizeof(road));
        for (i = 1; i <= la; i++)
        {
            for (j = 1; j <= lb; j++)
            {
                if (a[i-1] == b[j-1])
                {
                    dp[i][j] = dp[i-1][j-1] + 1;
                    road[i][j] = 0;
                }
                else
                {
                    if (dp[i-1][j] > dp[i][j-1])
                        dp[i][j] = dp[i-1][j], road[i][j] = 1;
                    else dp[i][j] = dp[i][j-1], road[i][j] = 2;
                }
            }
        }
        int k = 0;
        memset (haha, -1, sizeof(haha));
        i = la, j = lb;
        while (road[i][j] != -1)    //扫描最长公共序列路径
        {
            if (road[i][j] == 0)
            {
                i--, j--;
                haha[i] = j;
            }
            if (road[i][j] == 2)
                j--;
            if (road[i][j] == 1)
                i--;
        }
        int start = 0;        //b串的还没打印的第一个字母的位置
        for (i = 0; i < la; i++)
        {
            if (haha[i] == -1)        //不属于最长公共子序列的元素
            {
                printf ("%c", a[i]);
                continue;
            }
            //a[i]与b[haha[i]]匹配，属于最长公共子序列
            for (j = start; j <= haha[i]; j++)
                printf ("%c", b[j]);
            start = haha[i] + 1;
        }
        for (j = start; j < lb; j++)
            printf ("%c", b[j]);
        printf ("\n");
    }
    return 0;
}