#include "iostream"
#include "cstring"
using namespace std;
int main(int argc, char const *argv[])
{
	int n;
	char a[100][1000];
	while(cin>>n&&n)
	{
		getchar();
		for (int i = 0; i < n; ++i)
		{
			gets(a[i]);
		}
		int cnt1=0, cnt2=0;
		for (int i = 1; i <= (n+1)/2; ++i)
		{
			cout<<i<<' ';
		}
		cout<<"Score"<<endl;
		for (int i = 0; i < n; i+=2)
		{
			while(strstr(a[i]," no good "))
			{
				strcpy(a[i],strstr(a[i]," no good ")+9);
			}
			if(strlen(a[i])==7) 
			{
				strcpy(a[i]+1,a[i]);
				a[i][0]=' ';
			}
			if(strstr(a[i]," no good")) 
			{
				cout<<'X'<<' ';
			}
			else 
			{
				cout<<'O'<<' ';
				cnt1++;
			}
		}
		cout<<cnt1<<endl;
		for (int i = 1; i < n; i+=2)
		{
			while(strstr(a[i]," no good "))
			{
				strcpy(a[i],strstr(a[i]," no good ")+9);
			}
			if(strlen(a[i])==7) 
			{
				strcpy(a[i]+1,a[i]);
				a[i][0]=' ';
			}
			if(strstr(a[i]," no good")) 
			{
				cout<<'X'<<' ';
			}
			else 
			{
				cout<<'O'<<' ';
				cnt2++;
			}
		}
		if(n%2) cout<<'-'<<' ';
		cout<<cnt2<<endl;
	}
	return 0;
}