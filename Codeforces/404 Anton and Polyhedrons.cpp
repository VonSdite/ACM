#include <iostream>
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	while (~scanf("%d", &n))
	{
		string tmp;
		long long cnt = 0;
		for (int i = 0; i < n; ++i)
		{
			cin >> tmp;
			if(tmp == "Tetrahedron")
				cnt += 4;
			else if(tmp == "Cube") cnt += 6;
			else if(tmp == "Octahedron") cnt += 8;
			else if(tmp == "Dodecahedron") cnt +=12;
			else if(tmp == "Icosahedron") cnt +=20;
		}
		printf("%I64d\n", cnt);
	}
	return 0;
}