#include <iostream>
#include <cstdio>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while(~scanf("%d", &n))
	{
		double GPA = 0.0, sum = 0.0;

		while (n--)
		{
			double s, p;
			scanf("%lf %lf", &s, &p);

			if((int)p != -1)
			{
				sum += s;
				switch ((int)p/10)
				{
					case 10:
					case 9: p = 4;
					break;
		
					case 8: p = 3;
					break;
		
					case 7: p = 2;
					break;
					
					case 6: p = 1;
					break;
		
					default: p = 0;
					break;
				}
		
				GPA += s*p;
			}
		}
		if(sum) printf("%.2f\n", GPA/sum);
		else printf("-1\n");
	}
	return 0;
}