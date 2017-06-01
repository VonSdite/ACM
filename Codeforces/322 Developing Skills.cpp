#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5+5;
int a[SIZE];
struct T
{
    int id;
    int p;
} ne[SIZE];;

bool cmp(const T &a, const T &b)
{
    return a.p < b.p;
}

int main(int argc, char const *argv[])
{
    int n, k, sum;
    while (~scanf("%d %d", &n, &k))
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
            int tmp = a[i];
            int cnt = 1;
            while (tmp >= 10)
            {
                tmp /= 10;
                cnt *= 10;
            }
            if(cnt != 1) ne[i].p = (tmp+1)*cnt-a[i];
            else ne[i].p = 10 - a[i];
            ne[i].id = i;
        }
        sort(ne, ne+n, cmp);
        for (int i = 0; i < n; ++i)
        {
            if(k >= ne[i].p && a[ne[i].id] < 100) 
            {
                a[ne[i].id] += ne[i].p;
                k -= ne[i].p;
            }
            else break;
        }
        for (int i = 0; i < n; ++i)
        {
            while(k >= 10)
            {
                if(a[i] < 100) 
                {
                    a[i] += 10;
                    k -= 10;
                }
                else break;
            }
        }
        sum = 0;
        for (int i = 0; i < n; ++i)
        {
            sum += a[i]/10;
        }
        printf("%d\n", sum);
    }
    return 0;
}