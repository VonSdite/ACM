#include <iostream>
using namespace std;
int main()
{
	int n;
	while (cin >> n, n)
	{
		int i = 0, k, j, a[100], temp = 0;

		for (k = 0; k < n; k++)
			cin >> a[k];

		for (j = 0; j < n; j++)       
		{
			i = a[j] / 100;
			i += a[j] % 100 / 50;
			i += a[j] % 100 % 50 / 10;
			i += a[j] % 100 % 50 % 10 / 5;
			i += a[j] % 100 % 50 % 10 % 5 / 2;
			i += a[j] % 100 % 50 % 10 % 5 % 2 / 1;
			temp += i;                       
		}
		cout << temp << endl;
	}
	return 0;
}