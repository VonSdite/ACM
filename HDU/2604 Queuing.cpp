#include <iostream>
#include <cstring>

using namespace std;

#define NUM 4

struct Matrix
{
	int m[NUM][NUM];
	Matrix()
	{
		memset(m, 0, sizeof(m));
	}
};

int m;

Matrix operator*(Matrix &a, Matrix &b)
{
	Matrix t;
	for (int i = 0; i < NUM; ++i)
	{
		for (int j = 0; j < NUM; ++j)
		{
			for (int k = 0; k < NUM; ++k)
			{
				t.m[i][j] += (a.m[i][k] * b.m[k][j]);
				t.m[i][j] %= m;
			}
		}
	}
	return t;
}

void quickpower(Matrix &res, Matrix &t, int n)
{
	while (n)
	{
		if (n & 1) res = res * t;
		n >>= 1;
		t = t * t;
	}
}

int main(int argc, char const *argv[])
{
	int l;
	while (~scanf("%d %d", &l, &m))
	{
		Matrix tmp, res;
		for (int i = 0; i < 4; ++i)
		{
			++res.m[i][i];
		}
		for (int i = 0; i < 3; ++i)
		{
			++tmp.m[0][i];
			++tmp.m[i+1][i];
		}
		--tmp.m[0][1];
		++tmp.m[0][3];
		if(l > 4)
		{
			quickpower(res, tmp, l-4);
			int sum = res.m[0][0]*9 + res.m[0][1]*6 + res.m[0][2]*4 + res.m[0][3]*2;
			sum %= m;
			printf("%d\n", sum);
		}
		else
		{
			switch(l)
			{
				case 0: printf("%d\n", 0); break;
				case 1: printf("%d\n", 2 % m); break;
				case 2: printf("%d\n", 4 % m); break;
				case 3: printf("%d\n", 6 % m); break;
				case 4: printf("%d\n", 9 % m); break;
			}
		}
	}

	return 0;
}