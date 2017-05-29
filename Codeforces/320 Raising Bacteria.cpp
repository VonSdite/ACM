#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int x;
    int cnt;
    while (~scanf("%d", &x))
    {
        cnt = 0;
        while (x)
        {
            cnt += x & 1;
            x >>= 1;
        }
        printf("%d\n", cnt);
    }
    return 0;
}

// int main(int argc, char const *argv[])
// {
//     int x;
//     int cnt;
//     int p;
//     while (~scanf("%d", &x))
//     {
//         cnt = 0;
//         while (x)
//         {
//             int tmp = x;
//             p = 0;
//             while(tmp != 1)
//             {
//                 tmp /= 2;
//                 ++p;
//             }
//             x -= 1 << p;
//             ++cnt;
//         }
//         printf("%d\n", cnt);
//     }
//     return 0;
// }