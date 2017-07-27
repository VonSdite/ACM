#include <iostream>
#include <cstring>

using namespace std;

#define SIZE 2

struct matrix
{
    long long e[SIZE][SIZE];
    matrix()
    {
        memset(e, 0, sizeof(e));
    }
}A, A_n;

const long long mod = 1e9+7;      //上限

matrix operator*(matrix &a, matrix &b)
{
    matrix t;
    for (int i = 0; i < SIZE; ++i)
    {
        for (int j = 0; j < SIZE; ++j)
        {
            for (int k = 0; k < SIZE; ++k)
            {
                t.e[i][j] += a.e[i][k]*b.e[k][j];
                t.e[i][j] %= mod;
            }
        }
    }
    return t;
}

matrix quickpower(matrix &a, long long b)
{
    matrix ans;
    for (int i = 0; i < SIZE; ++i)
    {
        ans.e[i][i] = 1;
    }
    while (b)
    {
        if (b & 1) ans = ans * a;
        b >>= 1;
        a = a * a;
    }

    return ans;
}

int main(int argc, char const *argv[])
{
    int testn;
    scanf("%d", &testn);

    while (testn--)
    {
        long long n, m;
        scanf("%I64d %I64d", &n, &m);

        A.e[0][0] = 0;
        A.e[1][0] = A.e[1][1] = 1;
        A.e[0][1] = 2;
        
        A_n = quickpower(A, n);

        matrix b;
        if(n & 1)
        {
            b.e[0][0] = -1;
            b.e[0][1] = 2;
            b.e[1][0] = 1;
            b.e[1][1] = 0;
        }
        else
        {
            b.e[0][0] = b.e[1][1] = 1;
            b.e[0][1] = b.e[1][0] = 0;
        }

        A_n.e[0][0] -= b.e[0][0];
        A_n.e[0][1] -= b.e[0][1];
        A_n.e[1][0] -= b.e[1][0];
        A_n.e[1][1] -= b.e[1][1];
        
        A_n = quickpower(A_n, m-1);

        long long ans = (A_n.e[0][0] + A_n.e[1][0]) % mod;
        printf("%I64d\n", ans);
    }
    return 0;
}
