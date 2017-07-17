#include <iostream>

using namespace std;

const int SIZE = 105;
char str[SIZE];

int main(int argc, char const *argv[])
{
    int n;
    while (~scanf("%d", &n))
    {
        scanf("%s", str);
        int num = 0;

        for (int i = 0; i < n; ++i)
        {
            if(str[i] != '0')
            {
                while(i < n && str[i] == '1') 
                {
                    ++num;
                    ++i;
                }
                printf("%d", num);
                num = 0;
            }
            else
            {
                printf("0");
            }
        }  
        if(str[n-1] == '0') printf("0");      
        printf("\n");

    }
    return 0;
}