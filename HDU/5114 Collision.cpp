#include <bits/stdc++.h>

using namespace std;

long long exgcd(long long a, long long b, long long &x, long long &y)
{
    if(0==b)
    {
        x=1, y=0;
        return a;
    }
    long long r = exgcd(b, a%b, x, y);
   	int tmp = x;
   	x = y;
   	y = tmp - a/b*y;
    return r;
}

int main(int argc, char const *argv[])
{
    int t;
    printf("%d\n", -7%3);
    scanf("%d", &t);
    int cas = 1;
    while (t--)
    {
        long long x, y;
        scanf("%I64d %I64d", &x, &y);
        int x1, y1, x2, y2;
        scanf("%d %d %d %d", &x1, &y1, &x2, &y2);
        //避免出现小数，先都乘以2
        x*=2, y*=2, x1*=2, y1*=2, x2*=2, y2*=2;
        long long tim;
        printf("Case #%d:\n", cas++);
        //横坐标纵坐标相等的情况
        if(x1==x2 && y1==y2)
        {
            tim = 0;
        }
        //仅横坐标相等的情况
        else if(x1==x2 && y1!=y2)
        {
            tim = y - (y1+y2)/2;
        }
        //仅纵坐标相等的情况
        else if(x1!=x2 && y1==y2)
        {
            tim = x - (x1+x2)/2;
        }
        //横纵坐标都不想等的情况
        //通过归纳可知，横坐标相等的周期为x秒，纵坐标为y秒
        //所以横坐标相等的时间 t1 = x - (x1+x2)/2 + ix;
        //纵坐标相等的时间 t2 = y - (y1+y2)/2 + ky;
        //求t1==t2时i,k的可能解
        //即求 ix - ky == ((x1+x2)-(y1+y2))/2+y-x的可能解
        //利用扩展欧几里得算法即可
        else
        {
            int tm = ((x1+x2)-(y1+y2))/2+y-x;
            long long i, k;
            long long gcd = exgcd(x, y, i, k);
            if(tm%gcd)
            {
                tim = -1;
            }
            else
            {
                i*=tm/gcd;
                i=(i%(y/gcd)+y/gcd)%(y/gcd);
                //得到非负数需要这样做，举个例子，-1%5==-1而不是4
                //小tips, 取余函数的原理  a%b = a - (a/b)*b
                tim = x - (x1+x2)/2 + i*x;
            }
        }
        if(-1 == tim) printf("Collision will not happen.\n");
        else
        {
            x1 = (x1+tim)%(2*x), y1 = (y1+tim)%(2*y);
            if(x1 > x) x1 = 2*x - x1;
            if(y1 > y) y1 = 2*y - y1;
            printf("%.1f %.1f\n", x1/2.0, y1/2.0);
        }
    }
    return 0;
}