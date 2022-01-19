#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<int> W(N), V(N);
	for (int &i : W)
		cin >> i;
	for (int &i : V)
		cin >> i;
	vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
	for (int i = 0; i < N; i++)
		for (int j = 0; j <= M; j++)
		{
			dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
			if (j + W[i] <= M)
				dp[i + 1][j + W[i]] = max(dp[i + 1][j + W[i]], dp[i][j] + V[i]);
		}
	cout << dp[N][M] << endl;
	return 0;
}
