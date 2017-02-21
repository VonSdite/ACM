#include <iostream>
#include <cstring>

using namespace std;

#define NUM 105
#define mod 2

struct Matrix
{
	int m[NUM][NUM];
	Matrix()
	{
		memset(m, 0, sizeof(m));
	}
};

int len;

Matrix operator*(Matrix &a, Matrix &b)
{
	Matrix t;
	
	for (int i = 0; i < len; ++i)
	{
		for (int j = 0; j < len; ++j)
		{
			for (int k = 0; k < len; ++k)
			{
				t.m[i][j] ^= a.m[i][k] & b.m[k][j];
			}
		}
	}
	return t;
}

Matrix operator^(Matrix &a, int b)
{
	Matrix t;
	for (int i = 0; i < len; ++i)
	{
		++t.m[i][i];
	}

	while (b) 
	{
	   if (b & 1) t = t * a;
	   b >>= 1; 
	   a = a * a;
	}
	return t;
}

int main(int argc, char const *argv[])
{
	int n;
	char str[NUM];
	while (~scanf("%d %s", &n, str))
	{
		len = strlen(str);
		Matrix tmp;
		for (int i = 1; i < len; ++i)
		{
			++tmp.m[i][i-1];
			++tmp.m[i][i];
		}
		++tmp.m[0][0];
		++tmp.m[0][len-1];

		if (n > 0)
		{
			tmp = tmp^n;

			int ans[len];
			memset(ans, 0 , sizeof(ans));
			for (int i = 0; i < len; ++i)
			{
				for (int j = 0; j < len; ++j)
				{
					ans[i] ^= tmp.m[i][j] & (str[j] - '0');
				}
			}
			for (int i = 0; i < len; ++i)
			{
				printf("%d", ans[i]);
			}
		}
		else printf("%s", str);
		puts("");
	}
	return 0;
}