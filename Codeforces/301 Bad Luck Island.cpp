#include <iostream>  
#include <cstring> 
using namespace std;  

double dp[105][105][105];
  
int main()  
{  
    int r, s, p;  
    
    while (~scanf("%d %d %d", &r, &s, &p))
    {
        memset(dp, 0, sizeof(dp));
        dp[r][s][p] = 1.0;
        for (int i = r; i >= 0; --i)
        {
            for (int j = s; j >= 0; --j)
            {
                for (int k = p; k >= 0; --k)
                {
                    if((i&&j) || (i&&k) ||(j&&k))
                    {
                        double all = i*j + i*k + j*k;
                        if(k) dp[i][j][k-1] += dp[i][j][k]*j*k/all; 
                        if(j) dp[i][j-1][k] += dp[i][j][k]*j*i/all; 
                        if(i) dp[i-1][j][k] += dp[i][j][k]*i*k/all;
                    } 
                }
            }
        }
        double a1=0.0, a2=0.0, a3=0.0;
        for (int i = 1; i <= r; ++i)
        {
            a1 += dp[i][0][0];
        }
        for (int i = 1; i <= s; ++i)
        {
            a2 += dp[0][i][0];
        }
        for (int i = 1; i <= p; ++i)
        {
            a3 += dp[0][0][i];
        }

        printf("%.12f %.12f %.12f\n", a1, a2, a3);
    }
    return 0;  
}  