#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<vector<int>> A(N, vector<int>(N));
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> A[i][j];
	vector<vector<int>> dp(N, vector<int>(N, 0));
	dp[0][0] = A[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == 0 && j == 0)
				continue;
			if (i > 0)
				dp[i][j] = max(dp[i][j], dp[i - 1][j] + A[i][j]);
			if (j > 0)
				dp[i][j] = max(dp[i][j], dp[i][j - 1] + A[i][j]);
		}
	}
	cout << dp[N - 1][N - 1] << endl;
	return 0;
}