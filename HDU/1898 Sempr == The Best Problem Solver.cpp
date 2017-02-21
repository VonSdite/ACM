#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	while (n--)
	{

		int a, b, t;
		scanf("%d %d %d", &a, &b, &t);
		if(a > t) a = 0;
		else 
		{
			a = t - t % a;
		}
		if(b > t) b = 0;
		else
		{
			b = t - t % b;
		}
		if(a > b) printf("Sempr!\n");
		else if(a < b) printf("Xiangsanzi!\n");
		else printf("Both!\n");

	}
	return 0;
}