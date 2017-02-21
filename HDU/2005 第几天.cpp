#include <iostream>

using namespace std;

int a[13] = {0, 31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};

int is_run_year(int year)
{
	if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) return 1;
	else return 0;
}

int main(int argc, char const *argv[])
{
	int year, month, day;
	char tmp;
	while (~scanf("%d%c%d%c%d", &year, &tmp, &month, &tmp, &day))
	{
		int date = 0;
		for (int i = 1; i < month; ++i)
		{
			date += a[i];
		}
		date += day;
		if(is_run_year(year) && month > 2) ++date;
		printf("%d\n", date);
	}

	return 0;
}