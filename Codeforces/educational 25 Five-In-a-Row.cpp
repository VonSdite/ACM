#include <iostream>
#include <queue>
#include <cstring>

using namespace std;

const int SIZE = 20;
char mp[SIZE][SIZE];

int main(int argc, char const *argv[])
{
    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            scanf("%c", &mp[i][j]);
        }
        getchar();
    }

    for (int i = 0; i < 10; ++i)
    {
        for (int j = 0; j < 10; ++j)
        {
            if (mp[i][j] == '.')
            {
                int cnt;

                // 向左
                cnt = 1;
                for (int k = j - 1; k >= 0; --k)
                {
                    if (mp[i][k] == 'X')
                    {
                        ++cnt;
                        if (5 == cnt)
                        {
                            printf("YES\n");
                            return 0;
                        }
                    }
                    else break;
                }

                // 向右
                for (int k = j + 1; k < 10; ++k)
                {
                    if (mp[i][k] == 'X')
                    {
                        ++cnt;
                        if (5 == cnt)
                        {
                            printf("YES\n");
                            return 0;
                        }
                    }
                    else break;
                }

                // 向上
                cnt = 1;
                for (int k = i - 1; k >= 0; --k)
                {
                    if (mp[k][j] == 'X')
                    {
                        ++cnt;
                        if (5 == cnt)
                        {
                            printf("YES\n");
                            return 0;
                        }
                    }
                    else break;
                }

                // 向下
                for (int k = i + 1; k < 10; ++k)
                {
                    if (mp[k][j] == 'X')
                    {
                        ++cnt;
                        if (5 == cnt)
                        {
                            printf("YES\n");
                            return 0;
                        }
                    }
                    else break;
                }

                // 自右下到左上
                cnt = 1;
                for (int k = i - 1, q = j - 1; k >= 0 && q >= 0; --k, --q)
                {
                    if (mp[k][q] == 'X')
                    {
                        ++cnt;
                        if (5 == cnt)
                        {
                            printf("YES\n");
                            return 0;
                        }
                    }
                    else break;
                }

                // 自左上到右下
                for (int k = i + 1, q = j + 1; k < 10 && q < 10; ++k, ++q)
                {
                    if (mp[k][q] == 'X')
                    {
                        ++cnt;
                        if (5 == cnt)
                        {
                            printf("YES\n");
                            return 0;
                        }
                    }
                    else break;
                }

                // 自右上到左下
                cnt = 1;
                for (int k = i + 1, q = j - 1; k < 10 && q >= 0; ++k, --q)
                {
                    if (mp[k][q] == 'X')
                    {
                        ++cnt;
                        if (5 == cnt)
                        {
                            printf("YES\n");
                            return 0;
                        }
                    }
                    else break;
                }

                // 自左下到右上
                for (int k = i - 1, q = j + 1; k >= 0 && q < 10; --k, ++q)
                {
                    if (mp[k][q] == 'X')
                    {
                        ++cnt;
                        if (5 == cnt)
                        {
                            printf("YES\n");
                            return 0;
                        }
                    }
                    else break;
                }
            }
        }
    }

    printf("NO\n");
    return 0;
}