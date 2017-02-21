#include "iostream"
#include "string"
using namespace std;
string a;
int main(int argc, char const *argv[])
{
	while(cin>>a&&a!="#")
	{
		int cnt=0, len=a.length();
		for (int i = 0; i < len; ++i)
		{
			if(a[i]=='1') cnt++;
		}
		switch(a[len-1])
		{
			case 'o':
				if(cnt%2==0) 
				{
					a[len-1]='1';break;
				}
				else 
				{
					a[len-1]='0';break;
				}
			case 'e':
				if(cnt%2==0)
				{
					a[len-1]='0';break;
				} 
				else
				{
					a[len-1]='1';break;
				}
		}
		cout<<a<<endl;
	}
	return 0;
}