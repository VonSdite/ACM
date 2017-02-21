#include <cstdio>
#include <cstring>
#include <iostream>
#include <algorithm>
using namespace std;
#define LL __int64
struct Matrix
{
    LL  m[5][5];
} I, A, B, T;

LL a, b, n, mod;
int ssize = 3;

Matrix Mul(Matrix a, Matrix b)
{
    int i, j, k;
    Matrix c;
    for (i = 1; i <= ssize; i++)
    {
        for (j = 1; j <= ssize; j++)
        {
            c.m[i][j] = 0;
            for (k = 1; k <= ssize; k++)
            {
                c.m[i][j] += (a.m[i][k] * b.m[k][j]);
                c.m[i][j] %= mod;
            }
        }
    }
    return c;
}

Matrix quickpagow(int n)
{
    Matrix m = A, b = I;
    while (n)
    {
        if (n & 1)
            b = Mul(b, m);
        n = n >> 1;
        m = Mul(m, m);
    }
    return b;
}

int main()
{
    while (~scanf("%I64d%I64d", &n, &mod))
    {
        memset(I.m, 0, sizeof(I.m));
        memset(A.m, 0, sizeof(A.m));
        memset(B.m, 0, sizeof(B.m));
        for (int i = 1; i <= ssize; i++)
        {
            I.m[i][i] = 1;
        }
        B.m[1][1] = 1, B.m[1][2] = 2, B.m[1][3] = 1;
        A.m[1][2] = 2;
        A.m[2][1] = A.m[2][2] = A.m[3][2] = A.m[3][3] = 1;
        if (n == 1)
        {
            printf("%I64d\n", 1 % mod);
            continue;
        }
        if (n == 2)
        {
            printf("%I64d\n", 2 % mod);
            continue;
        }
        T = quickpagow(n - 2);
        T = Mul(B, T);
        printf("%I64d\n", T.m[1][2] % mod);
    }
    return 0;
}