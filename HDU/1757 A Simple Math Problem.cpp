#include <iostream>
#include <cstring>

using namespace std;

struct Matrix
{
	int m[12][12];
	Matrix()
	{
		memset(m, 0, sizeof(m));
	}
};

int m;

Matrix operator*(Matrix &a, Matrix &b)
{
	Matrix t;
	int i, j, k;
	for (i = 0; i < 10; i++)
		for (j = 0; j < 10; j++)
		{
			for (k = 0; k < 10; k++)
				t.m[i][j] += (a.m[i][k] * b.m[k][j]);  
			t.m[i][j] %= m;
		}
	return t;
}

void quickpower(Matrix &res, Matrix &t, int n, int m)
{
	while(n)
	{
		if(n & 1) res = res * t;
		n >>= 1;
		t = t * t;
	}
}

int main(int argc, char const *argv[])
{
	int k;
	while (~scanf("%d %d", &k, &m))
	{
		Matrix res, tmp;

		for (int i = 0; i < 10; ++i)
		{
			scanf("%d", &tmp.m[0][i]);
			res.m[i][i] = 1;
			tmp.m[i+1][i] = 1;
		}

		if(k < 10) printf("%d\n", k % m);
		else 
		{
			quickpower(res, tmp, k - 9, m);
			int sum = (res.m[0][0]*9 + res.m[0][1]*8 + res.m[0][2]*7 + res.m[0][3]*6 + res.m[0][4]*5 + res.m[0][5]*4 + res.m[0][6]*3 + res.m[0][7]*2 + res.m[0][8]*1) % m;
			printf("%d\n", sum);
		}
	}
	return 0;
}