#include <iostream>
#include <algorithm>
#include <map>

using namespace std;

map<int, int> tree;

int main()
{
    int n;
    int c1, c2, sum;
    int x, a;
    map<int, int>::iterator iter;
    while (~scanf("%d", &n))
    {
        tree.clear();
        c1 = c2 = sum = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d %d", &x, &a);
            tree[x] = a;
            if(x < 0) ++c1;
            else if(x > 0) ++c2;
        }
        if(c1 > c2)
        {
            iter = tree.end();
            --iter;
            for (int i = 0; i < 2*c2; ++i)
            {
                sum += iter->second;
                --iter;
            }
            sum += iter->second;
        }
        else
        {
            iter = tree.begin();
            for (int i = 0; i < 2*c1; ++i)
            {
                sum += iter->second;
                ++iter;
            }
            if(c1 != c2) sum += iter->second;
        }
        printf("%d\n", sum);
    }
    return 0;
}