#include <iostream>
#include <cmath>

using namespace std;

int main(int argc, char const *argv[])
{
    double m;
    int cnt = 1;
    double tmp = log10(2.0);
    while (~scanf("%lf", &m))
    {
        printf("Case #%d: ", cnt++);

        printf("%d\n", (int)(m*tmp));
    }
    return 0;
}