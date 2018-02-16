#include <bits/stdc++.h>

using namespace std;

char s[100000];

int main(int argc, char const *argv[])
{
    int index = 1;
    for (int i = 1; i < 500; ++i)
    {
        int mod = 1;
        int tmp = log10(i);
        for (int i = 0; i < tmp; ++i)
        {
            mod *= 10;
        }

        while (mod)
        {
            s[index++] = i / mod % 10 + '0';
            mod /= 10;
        }
    }

    s[index] = '\0';
    int n;
    while (~scanf("%d", &n))
    {
        printf("%c\n", s[n]);
    }
    return 0;
}