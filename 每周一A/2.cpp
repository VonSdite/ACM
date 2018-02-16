#include <bits/stdc++.h>

using namespace std;

const int SIZE = 105;

int winer[SIZE];
int record[SIZE];

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        memset(winer, 0, sizeof(winer));
        memset(record, 0, sizeof(record));

        int x, y;
        for (int i = 0 ; i < n * (n - 1) / 2 - 1 ; ++i)
        {
            scanf("%d %d", &x, &y);
            ++winer[x];
            ++record[x]; 
            ++record[y];
        }

        int people[2];
        int index = 0;

        for (int i = 1 ; i <= n ; ++i)
        {
            if (record[i] != n - 1)
                people[index++] = i;
        }

        if (winer[people[0]] > winer[people[1]])
            printf("%d %d\n", people[0], people[1]);
        else
            printf("%d %d\n", people[1], people[0]);
    }
    return 0;
}
