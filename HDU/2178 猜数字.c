#include<stdio.h>
#include<math.h>
int main(int argc, char const *argv[])
{
	int t;
	scanf("%d", &t);
	while(t--)
	{
		double n;
		scanf("%lf", &n);
		printf("%.0f\n", pow(2,n)-1);
	}
	return 0;
}