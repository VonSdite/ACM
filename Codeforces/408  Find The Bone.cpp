#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 1e6+5;
int cup[SIZE];
int hole[SIZE];

void swap(int &a, int &b)
{
    int tmp = a;
    a = b;
    b = tmp;
}

int main(int argc, char const *argv[])
{
    int n, m, k;
    int tmp;
    int l, r;
    while (~scanf("%d %d %d", &n, &m, &k))
    {
        memset(cup, 0, sizeof(cup));
        memset(hole, 0, sizeof(hole));
        cup[1] = 2;

        for (int i = 2; i <= n; ++i)
        {
            cup[i] = 1;
        }

        for (int i = 0; i < m; ++i)
        {
            scanf("%d", &tmp);
            hole[tmp] = 1;
        }

        bool flag = false;
        int ans = 1;

        if(hole[1] == 1)
        {
            flag = true;
        }
        for (int i = 0; i < k; ++i)
        {
            scanf("%d %d", &l, &r);
            if(!flag)
            {
                if(cup[l] == 2 && hole[r] == 1)
                {
                    flag = true;
                    ans = r;
                    cup[l] = 1;
                }
                if(cup[r] == 2 && hole[l] == 1)
                {
                    flag = true;
                    ans = l;
                    cup[r] = 1;
                }
                swap(cup[l], cup[r]);
                if(cup[r] == 2) ans = r;
                if(cup[l] == 2) ans = l;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}