#include <iostream>   
using namespace std;  
int main()  
{  
    int n,i,j,a[10000],k,h;  
    while(cin>>n)  
    {  
        k=0;  
        for(i=0;i<n;i++)  
        cin>>a[i];  
        for(i=0;i<n;i++)  
        if(a[i]!=-1)  
        {  
            h=a[i]; k++;  
            for(j=i+1;j<n;j++)  
            if(a[j]!=-1&&h>=a[j])  
            {  
                h=a[j];a[j]=-1;  
            }  
        }  
        cout<<k<<endl;  
    }  
    return 0;
}  