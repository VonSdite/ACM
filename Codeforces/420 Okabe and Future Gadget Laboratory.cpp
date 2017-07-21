#include <iostream>

using namespace std;

const int SIZE = 55;
int grid[SIZE][SIZE];

int main(int argc, char const *argv[])
{
    int n;
    scanf("%d", &n);
    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            scanf("%d", &grid[i][j]);
        }
    }

    for (int i = 0; i < n; ++i)
    {
        for (int j = 0; j < n; ++j)
        {
            if(1 != grid[i][j])
            {
                bool flag = false;
                for (int k = 0; k < n; ++k)
                {
                    for (int l = 0; l < n; ++l)
                    {
                        if(k == i && l == j) continue;
                        if(grid[i][l] + grid[k][j] == grid[i][j])
                        {
                            flag = true;
                            break;
                        }
                    }
                }
                if(!flag) 
                {
                    printf("No\n");
                    return 0;
                }
            }
        }
    }
    
    printf("Yes\n");
    return 0;
}