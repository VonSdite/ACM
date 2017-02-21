#include <iostream>
#include <cstring>

using namespace std;

#define NUM 2

struct Matrix
{
	int m[NUM][NUM];
	Matrix()
	{
		memset(m, 0, sizeof(m));
	}
};

int m = 1024;

Matrix operator*(Matrix &a, Matrix &b)
{
	Matrix t;
	for (int i = 0; i < NUM; ++i)
	{
		for (int j = 0; j < NUM; ++j)
		{
			for (int k = 0; k < NUM; ++k)
			{
				t.m[i][j] = (t.m[i][j] + a.m[i][k] * b.m[k][j])%m;
			}
		}
	}
	return t;
}

Matrix operator^(Matrix &a, int b)
{
	Matrix t;

	for (int i = 0; i < NUM; ++i)
	{
		++t.m[i][i];
	}

	while(b)
	{
		if(b & 1) t = t * a;
		b >>= 1;
		a = a * a;
	}
	return t;
}

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		int n;
		scanf("%d", &n);
		--n;
		Matrix res;
		res.m[0][0] = res.m[1][1] = 5;
		res.m[0][1] = 12;
		res.m[1][0] = 2;
		res = res^n;
		printf("%d\n", (2*(res.m[0][0]*5 + res.m[0][1]*2)-1) % m);
	}
	return 0;
}