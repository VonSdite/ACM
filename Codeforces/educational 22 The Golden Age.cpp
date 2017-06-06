#include <bits/stdc++.h>

using namespace std;

const long long LIMIT = 1000000000000000005;

std::vector<long long> v;
long long a[65];
long long b[65];
unordered_map<long long, bool> vi;

int main(int argc, char const *argv[])
{
    long long x, y, l, r;
    long long MAX;
    while (~scanf("%I64d %I64d %I64d %I64d", &x, &y, &l, &r))
    {
        if(l == 1 && r == 1) 
        {
            printf("1\n");
            continue;
        }
        v.clear();
        vi.clear();
        a[0] = b[0] = 1;
        int k = 1, kk = 1;
        int r1=0, r2=0;
        long long tmp = LIMIT;
        while (tmp)
        {
            tmp /= x;
            ++r1;
        }
        tmp = LIMIT;
        while (tmp)
        {
            tmp /= y;
            ++r2;
        }
        for (int i = 1; i <= r1; ++i)
        {
            a[i] = a[i-1]*x;
            if(a[i] >= LIMIT || i == r1) 
            {
                k = i;
                break;
            }
        }
        for (int i = 1; i <= r2; ++i)
        {
            b[i] = b[i-1]*y;
            if(b[i] >= LIMIT || i == r2)
            {
                kk = i;
                break;
            }
        }
        for (int i = 0; i < k; ++i)
        {
            for (int j = 0; j < kk; ++j)
            {
                long long tmp = a[i]+b[j];
                // printf("%I64d\n", tmp);
                if(!vi[tmp])
                {
                    if(tmp >= LIMIT || tmp <= 0) break;
                    if(tmp >= l && tmp <= r) 
                    {
                        ++vi[tmp];
                        v.push_back(tmp);
                    }
                }
            }
        }
        int len = (int)v.size();
        MAX = 0;
        if(len)
        {
            // printf("%I64d\n", v[0]);
            if(len == 1)
            {
                MAX = max(v[0]-l, r-v[0]);
            }
            else 
            {
                sort(v.begin(), v.end());
                // for (int i = 0; i < len; ++i)
                // {
                //     printf("%I64d\n", v[i]);
                // }
                MAX = max(v[0]-l, r-v[len-1]);
                for (int i = 1; i < len; ++i)
                {
                    MAX = max(MAX, v[i]-v[i-1]-1);
                }
            }
        }
        else
        {
            MAX = r-l+1;
        }
        printf("%I64d\n", MAX); 
    }
    return 0;
}