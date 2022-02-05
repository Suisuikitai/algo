#include <bits/stdc++.h>
using namespace std;
#define INF 1000000000

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	int A[N + 1], B[N + 1];
	for (int i = 0; i < N; i++)
		cin >> A[i] >> B[i];
	vector<vector<int>> dp(N + 1, vector<int>(M + 1, INF));
	dp[0][0] = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M + 1; j++)
		{
			if (dp[i][j] != INF)
				dp[i + 1][j] = 0;
			if (j + A[i] < M + 1)
			{
				if (dp[i][j] != INF)
					dp[i + 1][j + A[i]] = min(dp[i + 1][j + A[i]], 1);

				if (dp[i + 1][j] < B[i])
					dp[i + 1][j + A[i]] = min(dp[i + 1][j + A[i]], dp[i + 1][j] + 1);
			}
		}
	}
	if (dp[N][M] < INF)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
