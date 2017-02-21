#include <iostream>
#include <string>
#include <cstring>
#include <algorithm>

using namespace std;

int citizen[1000];

int main(int argc, char const *argv[])
{
	int n;
	while(cin >> n)
	{
		
			int max = 0;
			for (int i = 0; i < n; ++i)
			{
				scanf("%d", &citizen[i]);
				if(citizen[i] > max) max = citizen[i];
			}
			int cos = 0;
			for (int i = 0; i < n; ++i)
			{
				cos += max - citizen[i];
			}
			cout << cos << endl;
	}
	return 0;
}