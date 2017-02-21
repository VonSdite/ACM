#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int s, d;
	while (~scanf("%d %d", &s, &d) && s && d)
	{
		int cnt = 0;
		bool f = true;
		while(s % 60)
		{
			++cnt;
			s= (s+s*d) % 60;
			if(cnt > 60)
			{
				f = false;
				cout << "Impossible" << endl;
				break;
			}
		}
		if(f) cout << cnt << endl;
	}
	return 0;
}