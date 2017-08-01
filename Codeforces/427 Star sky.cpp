#include <bits/stdc++.h>

using namespace std;

const int SIZE = 102;

int sky[11][SIZE][SIZE];
int shine[11][SIZE][SIZE];

int main(int argc, char const *argv[])
{
    int x, y, s, n, q, c;
    scanf("%d %d %d", &n, &q, &c);
    
    for (int i = 0; i < n; ++i)
    {
        scanf("%d %d %d", &x, &y, &s);
        for (int j = 0; j <= c; ++j)
        {
            sky[j][x][y] += (s + j) % (c+1);
        }
    }

    for(int k = 0; k <= c; ++k)
    {
        for (int i = 1; i < SIZE; ++i)
        {
            for (int j = 1; j < SIZE; ++j)
            {
                shine[k][i][j] = sky[k][i][j] + shine[k][i-1][j] + shine[k][i][j-1] - shine[k][i-1][j-1]; 
            }
        }    
    }
     
    int t, x1, y1, x2, y2;
    for (int i = 0; i < q; ++i)
    {
        scanf("%d %d %d %d %d", &t, &x1, &y1, &x2, &y2);

        t %= (c+1);
        printf("%d\n", shine[t][x2][y2] - shine[t][x1-1][y2] - shine[t][x2][y1-1] + shine[t][x1-1][y1-1]);
    }
    
    return 0;
}