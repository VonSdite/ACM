#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
    int a, b;
    while (~scanf("%d %d", &a, &b))
    {
        int cnt = 0;
        while (a <= b)
        {
            a *= 3;
            b *= 2;
            ++cnt;
        }
        printf("%d\n", cnt);
    }
    return 0;
}