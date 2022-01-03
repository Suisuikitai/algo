#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int A[N][N];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			cin >> A[i][j];
	int dp[N][N];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			dp[i][j] = 10000;
	dp[0][N - 1] = A[0][N - 1];
	for (int i = 0; i < N; i++)
	{
		for (int j = N - 1; j >= 0; j--)
		{
			if (i - 1 >= 0)
				dp[i][j] = min(dp[i][j], dp[i - 1][j] + A[i][j]);
			if (j + 1 < N)
				dp[i][j] = min(dp[i][j], dp[i][j + 1] + A[i][j]);
		}
	}
	cout << dp[N - 1][0] << endl;
	return 0;
}
