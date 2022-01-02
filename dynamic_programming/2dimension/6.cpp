#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int A[N][N];
	int dp[N][N];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
		{
			cin >> A[i][j];
			dp[i][j] = 0;
		}
	dp[0][0] = A[0][0];
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (i == 0 && j == 0)
				continue;
			if (i - 1 >= 0)
				dp[i][j] = max(dp[i - 1][j] + A[i][j], dp[i][j]);
			if (j - 1 >= 0)
				dp[i][j] = max(dp[i][j - 1] + A[i][j], dp[i][j]);
		}
	}
	cout << dp[N - 1][N - 1] << endl;
	return 0;
}
