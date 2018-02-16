#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e6;

vector<int> v[SIZE];
int o;
bool h;

int main(int argc, char const *argv[])
{
    int n, m, k; 
    int tmp;

    while (~scanf("%d %d %d", &n, &k, &m))
    {
        for (int i = 0; i < SIZE; ++i)
        {
            v[i].clear();
        }

        for (int i = 0; i < n; i++) 
        {
            scanf("%d", &tmp);
            v[tmp % m].push_back(tmp);
        }
        for (int i = 0; i < m; i++) 
            if ((int)v[i].size() >= k) 
                h = true, o = i;

        if (!h) 
            printf("No\n");
        else
        {
            printf("Yes\n");
            for (int i = 0; i < k; i++) 
            {
                printf("%d", v[o][i]);
                if (i != k-1) printf(" ");
                else puts("");
            }
        }
    }

    return 0;
}
