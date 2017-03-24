#include <iostream>
#include <map>

using namespace std;

map<int, bool> record;
int main(int argc, char const *argv[])
{
	int a, b, c, d;
	while (~scanf("%d %d", &a, &b))
	{
		record.clear();
		scanf("%d %d", &c, &d);
		int i;
		for (i = 0; i < 205; ++i)
		{
			++record[a*i+b];
		}
		for (i = 0; i < 205; ++i)
		{
			if(record[c*i+d]) 
			{
				printf("%d\n", i*c+d);
				break;
			}
		}
		if(i == 205) printf("-1\n");
	}
	return 0;
}