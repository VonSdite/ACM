#include <iostream>

using namespace std;

const int SIZE = 105;
char sheet[SIZE][SIZE];

int main(int argc, char const *argv[])
{
    int n, m;
    while (~scanf("%d %d", &n, &m))
    {
        getchar();
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                scanf("%c", &sheet[i][j]);
            }
            getchar();
        }

        int t = SIZE, l = SIZE, r = -1, b = -1;
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            for (int j = 0; j < m; ++j)
            {
                if(sheet[i][j] == 'B')
                {
                    ++cnt;
                    t = min(t, i);
                    l = min(l, j);
                    r = max(r, j);
                    b = max(b, i);
                }
            }
        }
        int row = abs(b - t) + 1, col = abs(r - l) + 1;
        int len = max(row, col);
        if(cnt == 0)
        {
            printf("1\n");
        }
        else if(len > n || len > m)
        {
            printf("-1\n");
        }
        else 
        {
            printf("%d\n", len*len - cnt);
        }
    }
    return 0;
}