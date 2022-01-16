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
	vector<vector<int>> dp(N, vector<int>(N, 1000000));
	dp[0][N - 1] = A[0][N - 1];
	for (int i = 0; i < N; i++)
	{
		for (int j = N; j >= 0; j--)
		{
			if (j + 1 < N)
				dp[i][j] = min(dp[i][j + 1] + A[i][j], dp[i][j]);
			if (i - 1 >= 0)
				dp[i][j] = min(dp[i - 1][j] + A[i][j], dp[i][j]);
		}
	}
	cout << dp[N - 1][0] << endl;
	return 0;
}
