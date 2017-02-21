#include <iostream>
#include <string>
#include <algorithm>

using namespace std;

int main(int argc, char const *argv[])
{
	int m1, m2;
	while(cin >> m1 >> m2)
	{
		char tmp;
		int r1, r2, r3;
		r1 = r2 = r3 = 0;
		getchar();
		while (tmp = getchar())
		{
			if(tmp == '\n') break;
			switch(tmp)
			{
				case 'A':
					r1 = m1;
					break;
				case 'B':
					r2 = m2;
					break;
				case 'C':
					m1 = r3;
					break;
				case 'D':
					m2 = r3;
					break;
				case 'E':
					r3 = r1 + r2;
					break;
				case 'F':
					r3 = r1 - r2;
					break;
			}					
		}
		printf("%d,%d\n", m1, m2);		
	}
	return 0;
}