#include <iostream>

using namespace std;

int main()
{
    int na, nb;
    int k, m, a, tmp, cnt;
    while (~scanf("%d %d", &na, &nb))
    {
        cnt = 0;
        scanf("%d %d", &k, &m);
        for (int i = 0; i < na; ++i)
        {
            scanf("%d", &tmp);
            if(i == k-1) a = tmp;
        }
        for (int i = 0; i < nb; ++i)
        {
            scanf("%d", &tmp);
            if(tmp > a) ++cnt;
        }
        if(cnt >= m) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}