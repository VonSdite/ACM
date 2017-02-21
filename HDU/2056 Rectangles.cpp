#include "iostream"
#include "iomanip"

using namespace std;

int main(int argc, char const *argv[])
{
    double x1, y1, x2, y2, x3, y3, x4, y4;
    while (cin >> x1 >> y1 >> x2 >> y2 >> x3 >> y3 >> x4 >> y4)
    {
        cout << setiosflags(ios::fixed) << setprecision(2);
        if (x1 > x2) swap(x1, x2);
        if (y1 > y2) swap(y1, y2);
        if (x3 > x4) swap(x3, x4);
        if (y3 > y4) swap(y3, y4);
        double x = min(x2, x4) - max(x1, x3), y = min(y2, y4) - max(y1, y3);
        if (x > 0 && y > 0)cout << x*y << endl;
        else cout << 0. << endl;
    }
    return 0;
}