#include <bits/stdc++.h>

using namespace std;

void test()
{
    freopen("1output.txt", "w", stdout);
    for (int i = 1; i <= 1e4; ++i)
    {
        // int i = 1e5;
        printf("=%d:\n", i);
        for (int j = 1; j < i; ++j)
        {
            int sum = j;
            int tmp = j;
            while (tmp)
            {
                sum += tmp % 10;
                tmp /= 10; 
            }
            if(sum == i) printf("%d ", j);
        }
        printf("\n==================\n\n\n");
    }
}

int main(int argc, char const *argv[])
{
    int n;
    // test();
    std::vector<int> res;
    while (~scanf("%d", &n))
    {
        res.clear();
        for (int i = n-91; i <= n; ++i)
        {
            int sum = i;
            int tmp = i;
            while (tmp)
            {
                sum += tmp % 10;
                tmp /= 10; 
            }
            if(sum == n) res.push_back(i);
        }
        int len = (int)res.size();
        if (len)
        {
            printf("%d\n", len);
            for (int i = 0; i < len; ++i)
            {
                printf("%d", res[i]);
                if (i != len-1) printf(" ");
                else puts("");
            }
        }
        else
            printf("0\n");
    }
    return 0;
}