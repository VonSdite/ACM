#include <iostream>
#include <algorithm>

using namespace std;

const int SIZE = 1e3+5;
long long score[SIZE];

int main(int argc, char const *argv[])
{
    long long n, k;
    while (~scanf("%I64d %I64d", &n, &k))
    {
        int cnt = 0;
        for (int i = 0; i < n; ++i)
        {
            scanf("%I64d", &score[i]);
        }
        
        sort(score, score+n);

        for (int i = 0; i < n; ++i)
        {
            if(score[i] <= 2*k)
            {
                k = max(score[i], k);
            }
            else
            {
                while (score[i] > 2*k)
                {
                    k <<= 1;
                    ++cnt;
                }
                k = max(score[i], k);
            }
        }

        printf("%d\n", cnt);
    }
    return 0;
}