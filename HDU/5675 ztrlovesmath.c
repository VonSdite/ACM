/*
  n ^ 2 = x ^ 2 - y ^ 2;  
  1.
    (k + 1) ^ 2 - k ^ 2  = 2 * k + 1   

  2.
    (k + 1) ^ 2 - (k - 1) ^ 2 = 4 * k   

    当n为奇数或者4的倍数时(非1非4)，方程一定有正整数解 (因为n为1或4时，y=0)
  */
#include<stdio.h>
int main(int argc, char const *argv[])
{
    int t;
    scanf("%d", &t);
    while(t--)
    {
        long long n;
        scanf("%lld", &n);
        printf((n!=1&&n%2)||(n!=4&&n%4==0)?"True\n":"False\n");
    }
    return 0;
}