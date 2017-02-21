#include <iostream>
#include <cstring>

using namespace std;

#define mod 200907
#define NUM 3


struct Matrix
{
	long long m[NUM][NUM];
	Matrix()
	{
		memset(m, 0, sizeof(m));
	}
};

Matrix operator*(Matrix &a, Matrix &b)
{
	Matrix t;
	for (int i = 0; i < NUM; ++i)
	{
		for (int j = 0; j < NUM; ++j)
		{
			for (int k = 0; k < NUM; ++k)
			{
				t.m[i][j] = (t.m[i][j] + a.m[i][k] * b.m[k][j]) % mod;
			}
		}
	}
	return t;
}

Matrix operator^(Matrix &a, int b)
{
	Matrix ans;
	for (int i = 0; i < NUM; ++i)
	{
		++ans.m[i][i];
	}

	while (b)
	{
		if(b & 1) ans = ans * a;
		b >>= 1;
		a = a * a;
	}
	return ans;
}

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n) && n)
	{
		Matrix tmp;
		tmp.m[0][0] = tmp.m[0][2] = tmp.m[1][0] = tmp.m[2][2] = 1;
		tmp.m[0][1] = 2;
		if(n > 2)
		{
			n -= 2;
			tmp = tmp^n;
			printf("%d\n", (tmp.m[0][0]*2 + tmp.m[0][1] + tmp.m[0][2]) % mod);
		}
		else
		{
			switch(n)
			{
				case 1: printf("1\n"); break;
				case 2: printf("2\n"); break;
			}
		}
	}
	return 0;
}