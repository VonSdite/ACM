#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	unsigned int n, m;
	while (~scanf("%d %d", &n, &m) && (n || m))
	{
		cout<<n+m-2<<endl;
	}
	return 0;
}