#include <iostream>
#include <string>
#include <algorithm>
#include <cstring>

using namespace std;

int main(int argc, char const *argv[])
{
	long long n, m, k, x, y;
	while (cin >> n >> m >> k >> x >> y)
	{
		if(n != 1 && n != 2)
		{
			long long max = k/(2*n-2)/m * 2;
			long long max_mod = k%((2*n-2)*m);
			long long min;
			long long times;

			min = times = k/(2*n-2)/m;

			if(max_mod > m)
			{
				++max;
				if(max_mod >= m*n) 
				{
					++min;
					if(max_mod != m*n) ++max;
				}
			}
			
			if(max_mod && max == 0) ++max;

			if(x == 1)
			{
				if(max_mod >= y)
				{
					++times;
				}
			}
			else if(x == n)
			{
				long long tmp = max_mod - (n-1)*m;
				if(tmp >= y) ++times;
			}
			else
			{
				times *= 2;
				y += (x-1)*m;
				if(max_mod >= y) ++times;
				if(max_mod > n*m)
				{
					long long dis = n - x;
					dis *= 2;
					y += dis * m;
					if(max_mod >= y) ++times;
				}
			}

			cout << max << " " << min << " " << times << endl;
		}
		else if(n == 1)
		{
			long long max, min, times;
			max = min = times = k/m;
			if(k%m) ++max;

			if(k%m >= y) ++times;
			cout << max << " " << min << " " << times << endl;
		}
		else if(n == 2)
		{
			long long max, min, times;
			max = min = times = k/n/m;
			if(k%(m*n)) ++max;
			y += (x-1)*m;
			if(k%(m*n)>=y) ++times;
			cout << max << " " << min << " " << times << endl;
			
		}
	}
	return 0;
}