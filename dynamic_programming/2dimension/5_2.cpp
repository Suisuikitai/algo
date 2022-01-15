#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<string> S(N);
	for (int i = 0; i < N; i++)
		cin >> S[i];
	vector<vector<int>> dp(N, vector<int>(N, 0));
	dp[0][0] = 1;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (S[i][j] == '#')
				continue;
			if (i > 0)
				dp[i][j] += dp[i - 1][j];
			if (j > 0)
				if (j > 0)
					dp[i][j] += dp[i][j - 1];
		}
	}
	cout << dp[N - 1][N - 1] << endl;
	return 0;
}