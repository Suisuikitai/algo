#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<vector<int>> A(N, vector<int>(3, 0));
	for (int i = 0; i < N; i++)
		for (int &a : A[i])
			cin >> a;
	vector<vector<int>> dp(N, vector<int>(3, 0));
	dp[0][0] = A[0][0];
	dp[0][1] = A[0][1];
	dp[0][2] = A[0][2];
	for (int i = 1; i < N; i++)
	{
		dp[i][0] = max(dp[i - 1][1], dp[i - 1][2]) + A[i][0];
		dp[i][1] = max(dp[i - 1][0], dp[i - 1][2]) + A[i][1];
		dp[i][2] = max(dp[i - 1][0], dp[i - 1][1]) + A[i][2];
	}
	int ans = max(dp[N - 1][0], dp[N - 1][1]);
	ans = max(ans, dp[N - 1][2]);
	cout << ans << endl;
	return 0;
}
