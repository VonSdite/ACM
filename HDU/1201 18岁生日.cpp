#include <iostream>

using namespace std;

bool is_run(int year)
{
	if((year % 4 == 0 && year %100 != 0) || year % 400 == 0) return true;
	else return false;
}

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);

	while (t--)
	{
		int year, month, day;
		scanf("%d-%d-%d", &year, &month, &day);

		if(month != 2 || day != 29)
		{
			int sum = 0;

			for (int i = year + 1; i < year + 18; ++i)
			{
				sum += 365;
				if(is_run(i)) ++sum;
			}

			sum += 365;

			if(is_run(year) && month < 3) ++sum;
			if(is_run(year+18) && month > 2) ++sum;
			printf("%d\n", sum);
		}
		else printf("-1\n");
	}

	return 0;
}