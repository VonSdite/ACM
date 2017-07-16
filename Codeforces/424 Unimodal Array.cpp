#include <iostream>

using namespace std;

const int SIZE = 105;
int a[SIZE];

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        bool flag1 = true;

        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &a[i]);
        }

        for (int i = 1; i < n; ++i)
        {
            if (a[i] != a[i - 1])
            {
                flag1 = false;
                break;
            }
        }

        bool flag2 = true;
        bool tmp = false;
        int i;
        for ( i = 1; i < n; ++i)
        {
            if (!tmp && a[i - 1] >= a[i])
            {
                tmp = true;  
                continue;       
            }

            if (tmp)
            {
                if (a[i - 1] < a[i])
                {
                    flag2 = false;
                    break;
                }
                if(a[i-1] == a[i] && i-2 >= 0 && a[i-2] != a[i-1])
                {
                    flag2 = false;
                    break;
                }
            }
        }
        if (flag1 || flag2) printf("YES\n");
        else printf("NO\n");
    }
    return 0;
}