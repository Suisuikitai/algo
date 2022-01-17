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
			//移動もとのマスに到達可能か
			if (!dp[i][j])
				continue;
			dp[i + 1][j] = true;
			if (j + A[i] < M)
				dp[i + 1][j + A[i]] = true;
		}
	}
	int ans = 0;
	for (int i = 0; i < M; i++)
		if (dp[N - 1][i])
			ans++;
	cout << ans << endl;
	return 0;
}