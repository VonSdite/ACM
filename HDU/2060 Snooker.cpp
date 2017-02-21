#include "iostream"

using namespace std;

int main(int argc, char const *argv[])
{
	int n;
	cin >> n;
	while (n--)
	{
		int left_ball, P_score, O_score;
		cin >> left_ball >> P_score >> O_score;

		if (left_ball > 6) P_score += (left_ball - 6) * 8 + 27;
		else 
		{
			for (int i = 7; left_ball; --i, --left_ball)
			{
				P_score += i;
			}
		}
		if(P_score >= O_score) cout << "Yes" << endl;
		else cout << "No" << endl;
	}
	return 0;
}