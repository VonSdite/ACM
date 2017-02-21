#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while (t--)
	{
		char c;
		getchar();
		c = getchar();
		double a, b;
		scanf("%lf %lf", &a, &b);
		switch(c)
		{
			case '+': printf("%.f\n", a+b); break;
			case '-': printf("%.f\n", a-b); break;
			case '*': printf("%.f\n", a*b); break;
			case '/': 
			if((int)a % (int)b == 0) printf("%.f\n", a/b); 
			else printf("%.2f\n", a/b); break;
		}
	}
	return 0;
}