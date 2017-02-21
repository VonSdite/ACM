#include <iostream>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	while (n--)
	{
		int ah, am, as, bh, bm, bs, ch, cm, cs;
		cin >> ah >> am >> as >> bh >> bm >> bs;
		int sm, sh;
		sm = (as + bs) / 60;
		cs = (as + bs) % 60;
		cm = (am + bm + sm) % 60;
		sh = (am + bm + sm) / 60;
		ch = sh + ah + bh;
		cout << ch << " " << cm << " " << cs << endl;
	}
	return 0;
}