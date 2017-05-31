#include <bits/stdc++.h>

using namespace std;

const int SIZE = 1e5+5;
struct man
{
    long long m;
    long long s;
} people[SIZE];

bool cmp(const man &a, const man &b)
{
    return a.m > b.m;
}

// while(l<=r)
//二分搜索注意 r的值， 
//如果有满足条件的值，r就是正确的位置
//如果没有满足条件的值，r指向第一个不满足条件的值

int main(int argc, char const *argv[])
{
    int n, d;
    long long ans;
    while (~scanf("%d %d", &n, &d))
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%I64d %I64d", &people[i].m, &people[i].s);
        }
        sort(people, people+n, cmp);
        ans = 0;
        for (int i = 0; i < n; ++i)
        {
            if(i) people[i].s += people[i-1].s;
            int l = 0, r = i-1, mid;
            while(l <= r)
            {
                mid = (l+r)/2;
                if(people[mid].m - people[i].m < d) r = mid-1;
                else l = mid + 1;
            }
            if(r >= 0) ans = max(ans, people[i].s-people[r].s);
            else ans = max(ans, people[i].s);
        }
        printf("%I64d\n", ans);
    }
    return 0;
}