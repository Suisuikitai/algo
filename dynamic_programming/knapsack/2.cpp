#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, W;
	cin >> N >> W;
	vector<int> w(N), v(N);
	for (int i = 0; i < N; i++)
		cin >> w[i] >> v[i];
	vector<vector<int>> dp(N + 1, vector<int>(W + 1, 0));
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < W + 1; j++)
		{
			dp[i + 1][j] = max(dp[i][j], dp[i + 1][j]);
			if (j + w[i] < W + 1)
				dp[i + 1][j + w[i]] = max(dp[i + 1][j], dp[i][j] + v[i]);
		}
	}
	cout << dp[N][W] << endl;
	return 0;
}
