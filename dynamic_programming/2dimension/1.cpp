#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int dp[4][4];
	for (int &a : dp[0])
		cin >> a;
	for (int i = 1; i < 4; i++)
	{
		for (int j = 0; j < 4; j++)
		{
			dp[i][j] = dp[i - 1][j];
			if (j > 0)
				dp[i][j] += dp[i - 1][j - 1];
			if (j < 3)
				dp[i][j] += dp[i - 1][j + 1];
		}
	}
	cout << dp[3][3] << endl;
	return 0;
}
