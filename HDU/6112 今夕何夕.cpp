#include <bits/stdc++.h>

using namespace std;

int main(int argc, char const *argv[])
{
    int t;
    while (~scanf("%d", &t))
    {
        while (t--)
        {
            int year, month, day;
            scanf("%d-%d-%d", &year, &month, &day);
            // 分三种情况
            if(month > 2)
            {
                int nowday = 0;
                int d = 0;
                while (true)
                {
                    ++year;
                    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) d = (d+2) % 7;
                    else d = (d+1) % 7;

                    if(d == nowday) break;
                }
            }
            else if(month == 2)
            {
                if(day <= 28)
                {
                    int nowday = 0;
                    int d = 0;
                    while (true)
                    {
                        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) d = (d+2) % 7;
                        else d = (d+1) % 7;
                        ++year;

                        if(d == nowday) break;
                    }
                }
                else if(day == 29)
                {
                    int nowday = 0;
                    int d = 0;
                    while (true)
                    {
                        ++year;
                        if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) d = (d+2) % 7;
                        else d = (d+1) % 7;

                        if(((year % 4 == 0 && year % 100 != 0) || year % 400 == 0 ) && d == nowday)
                        {
                            break;
                        }
                    }
                }
            }
            else if(month < 2) 
            {
                int nowday = 0;
                int d = 0;
                while (true)
                {
                    if((year % 4 == 0 && year % 100 != 0) || year % 400 == 0) d = (d+2) % 7;
                    else d = (d+1) % 7;
                    ++year;
                    
                    if(d == nowday) break;
                }
            }
            printf("%d\n", year);
        }
    }
    return 0;
}