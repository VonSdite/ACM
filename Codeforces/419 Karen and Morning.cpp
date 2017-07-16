#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int hh, mm, ans;
    while (~scanf("%d:%d", &hh, &mm))
    {
        ans = 0;
        while (hh / 10 != mm % 10 || hh % 10 != mm / 10)
        {
            ++ans;
            ++mm;
            if (mm >= 60)
            {
                mm = 0;
                ++hh;
            }
            if (hh >= 24)
            {
                hh = 0;
            }
        }
        printf("%d\n", ans);
    }
    return 0;
}