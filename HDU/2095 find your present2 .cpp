/*用异或， 出现偶数次 就变成零了*/
#include "iostream"
using namespace std;
int main(int argc, char const *argv[])
{
	int n, tmp;
	while(~scanf("%d", &n)&&n)
	{
		int a=0;
		for (int i = 0; i < n; ++i)
		{
			scanf("%d", &tmp);
			a^=tmp;
		}
		printf("%d\n", a);
	}
	return 0;
}
// 或者如下
// #include "iostream"
// #include "map"
// using namespace std;
// std::map<int, int> flag;
// std::map<int, int>::iterator it;
// int main(int argc, char const *argv[])
// {
// 	int n;
// 	while(~scanf("%d", &n)&&n)
// 	{
// 		int tmp;
// 		flag.clear();
// 		for (int i = 0; i < n; ++i)
// 		{
// 			scanf("%d", &tmp);
// 			flag[tmp]++;
// 		}
// 		for (it=flag.begin(); it!=flag.end(); ++it)
// 		{
// 			if(it->second%2) 
// 			{
// 				printf("%d\n", it->first);
// 				break;
// 			}
// 		}
// 	}
// 	return 0;
// }