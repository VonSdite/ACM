#include "iostream"
#include "iomanip"
#include <string>

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	while (n--)
	{
		int k;
		cin >> k;
		double GPA = 0, score, credit, sum = 0;
		int flag = 1;
		string tmp;
		for (int i = 0; i < k; ++i)
		{
			cin >> tmp >> credit >> score;
			if (score < 60 || !flag) 
			{
				flag = 0;
				continue;
			}
			sum += credit;
			GPA += credit * score;
		}
		if (flag)
		{
			GPA	/= sum;
			cout << setiosflags(ios::fixed) << setprecision(2) << GPA <<endl;
		}
		else cout << "Sorry!" << endl;
		if (n) cout << endl;
	}
	return 0;
}