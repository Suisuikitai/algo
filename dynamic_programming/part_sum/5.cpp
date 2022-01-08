#include <bits/stdc++.h>
#define INF 100000000
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	int W[N];
	for (int i = 0; i < N; i++)
		cin >> W[i];
	int dp[N + 1][M + 1];
	for (int i = 0; i < N + 1; i++)
		for (int j = 0; j < M + 1; j++)
			dp[i][j] = INF;
	dp[0][0] = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M + 1; j++)
		{
			dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
			if (j - W[i] < 0)
				continue;
			dp[i + 1][j] = min(dp[i][j], dp[i][j - W[i]] + 1);
		}
	}
	if (dp[N][M] == INF)
		cout << -1 << endl;
	else
		cout << dp[N][M] << endl;
	return 0;
}
