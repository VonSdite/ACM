#include<stdio.h>/*找规律来解决*/
int main(int argc, char const *argv[])
{
	int arr[10000];
	int a, b, n;
	arr[1] = arr[2] = 1;
	while (scanf("%d %d %d", &a, &b, &n) != EOF && (a || b || n))
	{
		int T;
		for (T = 3; T < 10000; T++)
		{
			arr[T] = (a * arr[T - 1] + b * arr[T - 2]) % 7;
			if (arr[T] == 1 && arr[T - 1] == 1) break;
			//如果有两个连着 =1，则后面的全部和前面相同，即出现了周期
			//这时就没必要再进行下去了，跳出循环, i-2为周期
		}
		n = n % (i - 2);
		arr[0] = arr[i - 2];
		// 把n对周期求模，当n = i-2时, n=0,此时本来应该取arr[i-2]的，所以把arr[0]=arr[i-2]
		printf("%d\n", arr[n]);
	}
	return 0;
}