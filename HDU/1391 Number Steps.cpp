#include <iostream>
using namespace std;
int main()
{
	int a,b,t;
	cin>>t;
	while(t--)
	{
		cin>>a>>b;
		if(a-b==2||a==b)
		{
			if(a%2==1)
				cout<<a+b-1<<endl;
			else
				cout<<a+b<<endl;
		}
		else
			cout<<"No Number"<<endl;
	}
	return 0;
}