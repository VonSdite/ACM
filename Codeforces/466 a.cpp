#include <iostream>
#include <algorithm>

using namespace std;

const int SIZE = 105;
int p[SIZE];

int main(int argc, char const *argv[])
{
    int n, d;
    while (~scanf("%d %d", &n, &d))
    {
        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &p[i]);
        }
        
        sort(p, p+n);

        int tmp = 0;
        for (int i = 0; i < n; ++i)
        {
            int max_len = 1;
            for (int j = i+1; j < n; ++j)
            {
                if (p[j] - p[i] <= d) ++max_len;
                else break;
            }

            tmp = max(tmp, max_len);
        }

        printf("%d\n", n - tmp);
    }
    return 0;
}