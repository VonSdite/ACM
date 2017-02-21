#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
	int c;
	cin >> c;
	long long a[21] = {0, 0, 1};
	for (long long i = 3; i < 21; ++i)
	{
		a[i] = (i - 1) * (a[i-1] + a[i-2]);
	}
	while (c--)
	{
		long long n, m;
		cin >> n >> m;
		long long A = 1,  C = 1;
		for (long long i = 1; i <= m; ++i)
		{
			A *= i;
			C *= (n - i + 1);
		}
		cout << C / A * a[m]<< endl;
	}
	return 0;
}