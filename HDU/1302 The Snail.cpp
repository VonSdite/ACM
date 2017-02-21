#include <iostream>
#include <string>
#include <algorithm>

using namespace std;


int main(int argc, char const *argv[])
{
	double h, d, u, f;
	while(cin >> h >> d >> u >> f && h)
	{
		double height = 0;
		int day = 0;
		double ff = d * f/100;
		while(height <= h)
		{
			++day;
			if(d >= 0) height += d;
			d -= ff;

			if(height > h) break;

			height -= u;
			if(height < 0)
			{
				printf("failure on day %d\n", day);
				break;
			}
		}
		if(height >= h) printf("success on day %d\n", day);
	}
	return 0;
}
