#include <iostream>
#include <cstring>
#include <cmath>

using namespace std;

#define NUM 2
#define MOD 1e4
#define MODD 1e8

struct Matrix
{
	long long data[NUM][NUM];
	Matrix()
	{
		memset(data, 0, sizeof(data));
	}
};

long long mod;

Matrix operator*(const Matrix &a, const Matrix &b)
{
	Matrix t;
	for (int i = 0; i < NUM; ++i)
	{
		for (int j = 0; j < NUM; ++j)
		{
			for (int k = 0; k < NUM; ++k)
			{
				t.data[i][j] = (t.data[i][j] + a.data[i][k] * b.data[k][j]) % mod;
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
		++t.data[i][i];
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
	int n;
	while (~scanf("%d", &n))
	{
		if(n == 0) printf("0\n");
		else if(n == 1) printf("1\n");
		else if(n == 2) printf("1\n");
		else if(n < 40)
		{
			mod = MODD;
			Matrix t;
			t.data[0][0] = t.data[0][1] = t.data[1][0] = 1;
			t = t^(n-1);

			printf("%I64d\n", t.data[0][0]);
		}
		else
		{
			mod = MOD;
			Matrix t;
			t.data[0][0] = t.data[0][1] = t.data[1][0] = 1;
			t = t^(n-1);

 			double tmp;  
            double s = (sqrt(5.0)+1.0)/2.0;  
            tmp = -0.5*log(5.0)/log(10.0)+((double)n)*log(s)/log(10.0);  
            tmp -= floor(tmp);  
            tmp = pow(10.0,tmp);  
            while(tmp < 1000)
            	tmp *= 10;  

			printf("%04d...%04I64d\n", (int)tmp, t.data[0][0]);//不足四位补零
		}
	}
	return 0;
}