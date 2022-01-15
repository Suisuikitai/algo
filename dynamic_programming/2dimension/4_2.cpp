#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<vector<int>> dp(N, vector<int>(N, 0));
	dp[0][0] = 1;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i + 1 < N)
				dp[i + 1][j] += dp[i][j];
			if (j + 1 < N)
				dp[i][j + 1] += dp[i][j];
		}
	}
	cout << dp[N - 1][N - 1] << endl;
	return 0;
}
