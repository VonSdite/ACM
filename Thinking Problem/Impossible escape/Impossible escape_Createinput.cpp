// 用于生成测试样例
// U表示硬币正面朝上， D表示硬币正面朝下

#include <iostream>
#include <time.h>
#include <cstdlib>

using namespace std;

const char data[2] = {'D', 'U'};

int main(int argc, char const *argv[])
{
    freopen("Impossible escape_Input.txt", "w", stdout);
    int test_num;
    srand(time(NULL));
    scanf("%d", &test_num);
    for (int i = 0; i < test_num; ++i)
    {
        printf("%d\n", rand()%64);
        for (int i = 0; i < 8; ++i)
        {
            for (int j = 0; j < 8; ++j)
            {
                printf("%c", data[rand()%2]);
                if(j != 7) printf(" ");
                else printf("\n");
            }
        }
        printf("\n");
    }
    return 0;
}