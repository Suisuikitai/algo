#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	int W[N], V[N];
	for (int i = 0; i < N; i++)
		cin >> W[i];
	for (int i = 0; i < N; i++)
		cin >> V[i];
	int dp[N + 1][M + 1];
	for (int i = 0; i < N + 1; i++)
		for (int j = 0; j < M + 1; j++)
			dp[i][j] = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M + 1; j++)
		{
			dp[i + 1][j] = max(dp[i][j], dp[i + 1][j]);
			if (j - W[i] >= 0)
				dp[i + 1][j] = max(dp[i][j - W[i]] + V[i], dp[i + 1][j]);
		}
	}
	cout << dp[N][M] << endl;
	return 0;
}
