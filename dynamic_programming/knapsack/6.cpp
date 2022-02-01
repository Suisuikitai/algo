#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M, K;
	cin >> N >> M >> K;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	vector<vector<int>> dp(N + 1, vector<int>(M + 1, N + 1));
	dp[0][0] = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M + 1; j++)
		{
			dp[i + 1][j] = min(dp[i][j], dp[i + 1][j]);
			if (j + A[i] < M + 1)
				dp[i + 1][j + A[i]] = min(dp[i + 1][j + A[i]], dp[i][j] + 1);
		}
	}
	if (dp[N][M] <= K)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
