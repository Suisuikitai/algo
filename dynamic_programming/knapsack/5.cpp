#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	vector<vector<int>> dp(N + 1, vector<int>(M + 1, N + 1));
	dp[0][0] = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M + 1; j++)
		{
			dp[i + 1][j] = min(dp[i + 1][j], dp[i][j]);
			if (j + A[i] < M + 1)
				dp[i + 1][j + A[i]] = min(dp[i + 1][j + A[i]], dp[i][j] + 1);
		}
	}
	if (dp[N][M] == N + 1)
		cout << -1 << endl;
	else
		cout << dp[N][M] << endl;
	return 0;
}
