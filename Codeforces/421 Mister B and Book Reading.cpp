#include <iostream>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
    int c, v0, v1, a, l;
    int ans, speed;
    while (~scanf("%d %d %d %d %d", &c, &v0, &v1, &a, &l))
    {
        ans = 1;
        c -= v0;
        speed = v0;
        while (c > 0)
        {
            speed += a;
            speed = min(speed, v1);
            c -= speed;     
            c += l;
            ++ans;
        }
        printf("%d\n", ans);
    }
    return 0;
}