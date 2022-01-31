#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	vector<vector<int>> dp(N + 1, vector<int>(M + 1, 0));
	dp[0][0] = 1;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M + 1; j++)
		{
			(dp[i + 1][j] += dp[i][j]) %= 1000;
			if (j + A[i] < M + 1)
				(dp[i + 1][j + A[i]] += dp[i][j]) %= 1000;
		}
	}
	cout << dp[N][M] << endl;
	return 0;
}
