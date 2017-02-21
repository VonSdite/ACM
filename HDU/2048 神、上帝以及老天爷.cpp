#include "iostream"
#include <iomanip>

using namespace std;

int main(int argc, char const *argv[])
{
	int c;
	cin >> c;
	double a[21] = {0, 0, 1};
	for (int i = 3; i < 21; ++i)
	{
		a[i] = (i - 1) * (a[i-1] + a[i-2]);
	}
	while (c--)
	{
		int n;
		cin >> n;
		double A = 1;
		for (double i = 1; i <= n; ++i)
		{
			A *= i;
		}
		cout << setiosflags(ios::fixed) << setprecision(2) << a[n] * 100 / A << "%" << endl;
	}
	return 0;
}