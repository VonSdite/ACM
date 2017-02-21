#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	scanf("%d", &n);
	int i, aa, bb, a = 0, b = 0;
	for (i = 0; i < n; i++)
	{
		scanf("%d %d", &aa, &bb);
		if (aa > bb) a++;
		else if (aa < bb) b++;
	}
	if (a > b) printf("Mishka\n");
	else if (a == b) printf("Friendship is magic!^^\n");
	else printf("Chris\n");
	return 0;

}