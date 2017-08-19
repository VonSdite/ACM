#include <bits/stdc++.h>

using namespace std;

const int SIZE = 200;
int f[SIZE];

void init();

int main(int argc, char const *argv[])
{
    int t;
    int l, r, L, R;
    scanf("%d", &t);

    int cnt = 0;

    while (t--)
    {
        cnt++;

        scanf("%d %d %d %d", &l, &r, &L, &R);
        long long ans = 0;
        for (int j = L; j <= R; j++)
        {
            int a = 0, b = r;
            while (b)
            {
                f[a] = b % j;
                a++;
                b /= j;
            }

            long long t = 0, R = j - 1;
            for (int i = 1; i < a; i++)
            {
                t += R;
                if (i % 2 == 0)
                    R *= j;
            }

            long long aa = 0;
            for (int i = 0; i < a / 2; i++)
            {
                f[i] = f[a - 1 - i];
                if (i != 0)
                    aa = aa * j + f[a - i - 1];
                else
                    aa = aa * j + (f[a - i - 1] - 1);
            }
            if (a % 2 == 1)
                aa = aa * j + f[a / 2];
            if (a <= 1)
                aa--;
            aa++;
            long long tmp = 0;
            for (int i = a - 1; i >= 0; i--)
                tmp = tmp * j + f[i];
            if (tmp > r)
                aa--;
            ans += (aa + t) * j + (r - aa - t);
            a = 0, b = l - 1;
            while (b)
            {
                f[a] = b % j;
                a++;
                b /= j;
            }
            t = 0, R = j - 1;
            for (int i = 1; i < a; i++)
            {
                t += R;
                if (i % 2 == 0)
                    R *= j;
            }
            aa = 0;
            for (int i = 0; i < a / 2; i++)
            {
                f[i] = f[a - 1 - i];
                if (i != 0)
                    aa = aa * j + f[a - i - 1];
                else
                    aa = aa * j + (f[a - i - 1] - 1);
            }
            if (a % 2 == 1)
                aa = aa * j + f[a / 2];
            if (a <= 1)
                aa--;
            aa++;
            tmp = 0;
            for (int i = a - 1; i >= 0; i--)
                tmp = tmp * j + f[i];
            if (tmp > (l - 1))
                aa--;
            ans -= (aa + t) * j + (l - 1 - aa - t);
        }
        printf("Case #%d: %I64d\n", cnt, ans);
    }
    return 0;
}

void init()
{
    printf("hello world\n");
}