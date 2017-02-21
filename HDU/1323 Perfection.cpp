#include <iostream>
#include <iomanip>

using namespace std;
const int maxn = 110;

int main()
{
	int a[maxn] , b[maxn] , n = 0;
	while (cin >> a[n] && a[n]) n++;
	for (int i = 0; i < n; i++)
	{
		int tmp = 0;
		for (int j = a[i] / 2; j >= 1; j--) if (a[i] % j == 0) tmp += j;
		b[i] = tmp;
	}
	cout << "PERFECTION OUTPUT" << endl;
	for (int i = 0; i < n; i++)
	{
		cout << setw(5) << a[i] << "  ";
		if (b[i] == a[i]) cout << "PERFECT" << endl;
		else if (b[i] > a[i]) cout << "ABUNDANT" << endl;
		else cout << "DEFICIENT" << endl;
	}
	cout << "END OF OUTPUT" << endl;
	return 0;
}