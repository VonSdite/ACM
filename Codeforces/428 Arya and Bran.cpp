#include <bits/stdc++.h>

using namespace std;

const int SIZE = 105;
int candy[SIZE];

int main(int argc, char const *argv[])
{
    int n, k;
    while (~scanf("%d %d", &n, &k))
    {
        memset(candy, 0, sizeof(candy));

        int sum = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &candy[i]);
            sum += candy[i];
        }
       
        if(sum < k) printf("-1\n");
        else
        {
            int ans = 0;
            for (int i = 0; i < n; ++i)
            {
                if(candy[i] > 8) 
                {
                    k -= 8;
                    candy[i+1] += candy[i] - 8;
                }
                else
                {
                    k -= candy[i];
                }
                ++ans;
                if(k <= 0) break;
            }
            if(k > 0) printf("-1\n");
            else printf("%d\n", ans);
        }
    }
    return 0;
}