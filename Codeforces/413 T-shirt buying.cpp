#include <bits/stdc++.h>

using namespace std;

const int MAX = 1e9 + 5;
const int SIZE = 2e5 + 5;
int p[SIZE];
int a[SIZE];
int b[SIZE];
int c[SIZE];
map<int, map<int, list<int>>> record;

int main(int argc, char const *argv[])
{
    int n, m;
    while (~scanf("%d", &n))
    {
        record.clear();
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &p[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &b[i]);
        }
        for (int i = 0; i < n; ++i)
        {
            record[a[i]][b[i]].push_back(p[i]);
        }

        for (int i = 1; i < 4; ++i)
        {
            for (int j = 1; j < 4; ++j)
            {
                if (record[i][j].empty()) continue;
                record[i][j].sort();
            }
        }

        scanf("%d", &m);
        for (int i = 0; i < m; ++i)
        {
            scanf("%d", &c[i]);
        }
        for (int i = 0; i < m; ++i)
        {
            int p1 = MAX, p2 = MAX;
            int r1, r2;
            for (int j = 1; j < 4; ++j)
            {
                if (record[c[i]][j].empty())
                    continue;
                int tmp = record[c[i]][j].front();
                if (p1 > tmp)
                {
                    p1 = tmp;
                    r1 = j;
                }
            }
            for (int j = 1; j < 4; ++j)
            {
                if (record[j][c[i]].empty())
                    continue;
                int tmp = record[j][c[i]].front();
                if (p2 > tmp)
                {
                    p2 = tmp;
                    r2 = j;
                }
            }
            if (MAX == p1 && MAX == p2)
            {
                printf("-1 ");
            }
            else
            {
                if (p1 < p2)
                {
                    printf("%d ", record[c[i]][r1].front());
                    list<int>::iterator iter = record[c[i]][r1].begin();
                    record[c[i]][r1].erase(iter);
                }
                else
                {
                    printf("%d ", record[r2][c[i]].front());
                    list<int>::iterator iter = record[r2][c[i]].begin();
                    record[r2][c[i]].erase(iter);
                }
            }
        }
        printf("\n");
    }
    return 0;
}