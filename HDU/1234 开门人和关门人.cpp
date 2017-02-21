#include <iostream>
#include <string>

using namespace std;

struct Person
{
	int com_hour;
	int com_minute;
	int com_second;

	int lea_hour;
	int lea_minute;
	int lea_second;

	string id_card;
};

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);

	while (n--)
	{
		int m;
		Person first, last, tmp;
		char tm;
		scanf("%d", &m);
		for (int i = 0; i < m; ++i)
		{
			cin >> tmp.id_card >> tmp.com_hour >> tm >> tmp.com_minute >> tm >> tmp.com_second >> tmp.lea_hour >> tm >> tmp.lea_minute >> tm >> tmp.lea_second;
			if (i == 0)
			{
				first = last = tmp;
				continue;
			}

			if(tmp.com_hour < first.com_hour)
			{
				first = tmp;
			} 
			else if(tmp.com_hour == first.com_hour)
			{
				if(tmp.com_minute < first.com_minute)
				{
					first = tmp;
				}
				else if(tmp.com_minute == first.com_minute)
				{
					if(tmp.com_second < first.com_second)
					{
						first = tmp;
					}
				}
			}

			if(tmp.lea_hour > last.lea_hour)
			{
				last = tmp;
			}
			else if(tmp.lea_hour == last.lea_hour)
			{
				if(tmp.lea_minute > last.lea_minute)
				{
					last = tmp;
				}
				else if(tmp.lea_minute == last.lea_minute)
				{
					if(tmp.lea_second > last.lea_second)
					{
						last = tmp;
					}
				}
			}
		}
		cout << first.id_card << " " << last.id_card << endl;
	}
	return 0;
}