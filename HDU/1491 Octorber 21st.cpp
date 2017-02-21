#include <iostream>
#include <cstdio>
#include <cstring>
#include <cmath>
#include <algorithm>
using namespace std;


int main()
{
    int a[11]={0,31,28,31,30,31,30,31,31,30};
    int t;
    while(cin>>t)
    {
        for(int i=0;i<t;i++){
        int sum=0;
        int n,m;
        cin>>n>>m;
        if(((n==10)&&(m>21))||n>10) cout<<"What a pity, it has passed!"<<endl;
        else if(n==10&&m==21) cout<<"It's today!!"<<endl;
        else
        {
            for(int i=n;i<10;i++)
                sum+=a[i];
            sum=sum+21-m;
            cout<<sum<<endl;
        }
        }

    }
    return 0;
}