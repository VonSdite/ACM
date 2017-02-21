#include "iostream"
#include "algorithm"

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	cin >> t;
	while (t--)
	{
		double h, m, s;
		cin >> h >> m >> s;
		if (h > 12) h -= 12;
		double triangle = abs(h * 30 - 5.5 * m - s * 0.1+s/120);
		if (triangle > 180) triangle = 360 - triangle;
		cout << (int)triangle << endl;
	}
	return 0;
}