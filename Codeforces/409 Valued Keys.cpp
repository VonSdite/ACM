#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
	string x, y;
	while (cin >> x >> y)
	{
		 bool flag = false;
		 size_t len = x.length();
		 for (size_t i = 0; i < len; ++i)
		 {
		 	if(y[i] > x[i])
		 	{
		 		flag = true;
		 		break;
		 	}
		 }
		 if(flag) printf("-1\n");
		 else cout << y << endl;
	}
	return 0;
}