#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int n, k;
    while (~scanf("%d %d", &n, &k))
    {
        if(n)
        {
            int ans = 0;
            int cnt = 0;

            while (n && cnt != k)
            {
                if(n % 10 != 0) ++ans;
                else ++cnt;
                n /= 10;
            }
            if(cnt == k) printf("%d\n", ans);
            else
            {
                printf("%d\n", ans+cnt-1);
            }
        }
        else printf("0\n");
    }
    return 0;
}