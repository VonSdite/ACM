#include <iostream>

using namespace std;

const int SIZE = 64;
bool box[SIZE];       // 棋盘64格, 0表示正面朝上，1表示正面朝下

int main(int argc, char const *argv[])
{
    char tmp;
    int fa, fb, l;
    int RightPos;
    freopen("Impossible escape_Input.txt", "r", stdin);
    while (~scanf("%d", &RightPos))
    {
        for (int i = 0; i < SIZE; ++i)
        {
            scanf("%c", &tmp);
            getchar();
            // 0表示正面朝上， 1 表示正面朝下
            if('D' == tmp) box[i] = 1;
            else if('U' == tmp) box[i] = 0;
        }

        // ====================================
        // 模拟囚犯A拿到局面{ai}
        fa = 0;
        for (int i = 0; i < SIZE; ++i)
        {
            if(box[i]) fa ^= i;
        }
        l = fa^RightPos;        // 计算A应该翻转硬币的坐标
        box[l] ^= 1;            // 翻转硬币

        // ====================================
        // 模拟囚犯B拿到局面{ai}'
        fb = 0;
        for (int i = 0; i < SIZE; ++i)
        {
            if(box[i]) fb ^= i;
        }
        printf("%d\n", fb);     // 输出B认为有纸片的目标位置
    }
    return 0;
}