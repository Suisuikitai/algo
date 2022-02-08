#include <bits/stdc++.h>
using namespace std;
#define INF 100000000

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<vector<int>> dp(N + 1, vector<int>(M + 1, INF));
	dp[0][0] = 0;
	int c[N][M];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			cin >> c[i][j];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M; j++)
		{
			dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i + 1][j] + c[i][j]);
			dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j + 1] + c[i][j]);
			dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + c[i][j]);
		}
	}
	cout << dp[N][M] << endl;
}