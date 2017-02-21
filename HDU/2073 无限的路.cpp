#include "iostream"
#include "cmath"
#include "algorithm"
#include "iomanip"

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	while (n--)
	{
		double x1, x2, y1, y2, sum1 = 0, sum2 = 0;
		cin >> x1 >> y1 >> x2 >> y2;
		double tmp1 = x1 + y1, tmp2 = x2 + y2;
		sum1 = tmp1 * (tmp1 - 1) * sqrt(2) / 2;
		sum2 = tmp2 * (tmp2 - 1) * sqrt(2) / 2;
		if (x1 > 0 || y1 > 0) ++sum1;
		if (x2 > 0 || y2 > 0) ++sum2;
		for (int i = 1; i < tmp1; ++i)
		{
			sum1 += sqrt(2 * i * i + 2 * i + 1);
		}
		for (int i = 1; i < tmp2; ++i)
		{
			sum2 += sqrt(2 * i * i + 2 * i + 1);
		}
		sum1 += sqrt(2) * (tmp1 - y1);
		sum2 += sqrt(2) * (tmp2 - y2);

		cout << setiosflags(ios::fixed) << setprecision(3) << abs(sum1 - sum2) << endl;
	}
	return 0;
}