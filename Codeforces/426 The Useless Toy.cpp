#include <bits/stdc++.h>

using namespace std;

char cw[5] = {'v', '<', '^', '>'};
char ccw[5] = {'v', '>', '^', '<'};

int main(int argc, char const *argv[])
{
    char begin, end;
    scanf("%c %c", &begin, &end);

    int n;
    scanf("%d", &n);
    int s = 0;

    for (int i = 0; i < 4; ++i)
    {
        if (cw[i] == begin)
        {
            s = i;
            break;
        }
    }

    n %= 4;
    char tmp1 = begin;
    for (int i = 0; i < n; ++i)
    {
        tmp1 = cw[(s + 1) % 4];
        ++s;
    }

    for (int i = 0; i < 4; ++i)
    {
        if (ccw[i] == begin)
        {
            s = i;
            break;
        }
    }
    char tmp2 = begin;
    for (int i = 0; i < n; ++i)
    {
        tmp2 = ccw[(s + 1) % 4];
        ++s;
    }

    if (tmp2 == tmp1)
    {
        printf("undefined\n");
    }
    else if (tmp2 == end)
    {
        printf("ccw\n");
    }
    else if (tmp1 == end)
    {
        printf("cw\n");
    }

    return 0;
}