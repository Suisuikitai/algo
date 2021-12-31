#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int A[N][3];
	for (int i = 0; i < N; i++)
	{
		cin >> A[i][0];
		cin >> A[i][1];
		cin >> A[i][2];
	}
	int dp[N + 1][3];
	dp[0][0] = 0;
	dp[0][1] = 0;
	dp[0][2] = 0;
	for (int i = 0; i < N; i++)
	{
		dp[i + 1][0] = max(dp[i][1], dp[i][2]) + A[i][0];
		dp[i + 1][1] = max(dp[i][0], dp[i][2]) + A[i][1];
		dp[i + 1][2] = max(dp[i][0], dp[i][1]) + A[i][2];
	}
	int ans = max(dp[N][0], dp[N][1]);
	ans = max(ans, dp[N][2]);
	cout << ans << endl;
	return 0;
}
