#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5;
int num[SIZE];

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        memset(num, 0, sizeof(num));
        num[0] = num[1] = 1;
        for (int i = 2; i <= n; ++i)
        {
            for (int j = 1; j <= num[0]; ++j)
            {
                num[j] *= i;
            }
            for (int j = 1; j <= num[0]; ++j)
            {
                if(num[j]>9)
                {
                    num[j+1] += num[j]/10;
                    num[j] %= 10;
                }
                if(num[num[0]+1]) ++num[0];
            }
        }
        for (int i = num[0]; i >= 1; --i)
        {
            putchar(num[i]+'0');
        }
        puts("");
    }
    return 0;
}