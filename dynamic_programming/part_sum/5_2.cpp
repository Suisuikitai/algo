#include <bits/stdc++.h>
#define INF 100000000
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<int> W(N);
	for (int &w : W)
		cin >> w;
	vector<vector<int>> dp(N + 1, vector<int>(M + 1, INF));
	dp[0][0] = 0;
	// i番目までのボールを選択できる時
	for (int i = 0; i < N; i++)
	{
		//重さjが幾つのボールで再現できるか
		for (int j = 0; j < M + 1; j++)
		{
			if (dp[i][j] == INF)
				continue;
			dp[i + 1][j] = min(dp[i][j], dp[i + 1][j]);
			if (j + W[i] <= M)
				dp[i + 1][j + W[i]] = min(dp[i + 1][j + W[i]], dp[i][j] + 1);
		}
	}
	if (dp[N][M] == INF)
		cout << -1 << endl;
	else
		cout << dp[N][M] << endl;
	return 0;
}
