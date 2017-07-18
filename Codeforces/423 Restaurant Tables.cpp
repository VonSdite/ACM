#include <iostream>
#include <cstring>

using namespace std;

const int SIZE = 2e5+6;

int main(int argc, char const *argv[])
{
    int n, a, b, group, ab;
    int cnt;
    while (~scanf("%d %d %d", &n, &a, &b))
    {
        cnt = 0;
        ab = 0;

        for (int i = 0; i < n; ++i)
        {
            scanf("%d", &group);

            if(group & 1)
            { // 表示来1个人
                if(a)
                {
                    --a;
                }
                else if(b)
                {
                    --b;
                    ++ab;
                }
                else if(ab)
                {
                    --ab;
                }
                else 
                {
                    ++cnt;
                }
            }
            else
            { // 表示来2个人
                if(b)
                {
                    --b;
                }
                else 
                {
                    cnt += 2;
                }
            }
        }
        printf("%d\n", cnt);
    }
    return 0;
}