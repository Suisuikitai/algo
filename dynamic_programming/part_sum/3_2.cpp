#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<int> A(N - 1, 0), B(N - 1, 0);
	for (int &a : A)
		cin >> a;
	for (int &b : B)
		cin >> b;
	vector<vector<int>> dp(N, vector<int>(M, -1));
	dp[0][0] = 0;
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (dp[i][j] == -1)
				continue;
			dp[i + 1][j] = max(dp[i + 1][j], dp[i][j]);
			if (A[i] + j < M)
				dp[i + 1][A[i] + j] = max(dp[i + 1][A[i] + j], dp[i][j] + B[i]);
		}
	}
	cout << dp[N - 1][M - 1] << endl;
	return 0;
}
