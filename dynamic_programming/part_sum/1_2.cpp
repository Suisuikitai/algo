#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<int> A(N - 1, 0);
	for (int i = 0; i < N - 1; i++)
		cin >> A[i];
	vector<vector<bool>> dp(N, vector<bool>(M, false));
	dp[0][0] = 1;
	for (int i = 0; i < N - 1; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (dp[i][j])
				dp[i + 1][j] = true;
			if (j - A[i] >= 0 && dp[i][j - A[i]])
				dp[i + 1][j] = true;
		}
	}
	int ans = 0;
	for (int i = 0; i < M; i++)
		if (dp[N - 1][i])
			ans++;
	cout << ans << endl;
	return 0;
}