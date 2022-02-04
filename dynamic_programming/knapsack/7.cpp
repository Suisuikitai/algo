#include <bits/stdc++.h>
using namespace std;
#define INF 1000000000

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	int A[501], B[501];
	for (int i = 0; i < N; i++)
		cin >> A[i] >> B[i];
	// INFの時は実現不可能を表す
	vector<vector<int>> dp(N + 1, vector<int>(M + 1, INF));
	// 0の時は実現できるが値を選ばないことを表す
	dp[0][0] = 0;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M + 1; j++)
		{
			if (j + A[i] < M + 1)
			{
				// jをiまでの数で実現できているためi+1番目からピックする必要はないため、0を代入する
				if (dp[i][j] < INF)
					dp[i + 1][j] = 0;

				if (dp[i][j] < INF)
					dp[i + 1][j + A[i]] = min(dp[i + 1][j + A[i]], 1);

				if (dp[i + 1][j] < B[i])
					dp[i + 1][j + A[i]] = min(dp[i + 1][j + A[i]], dp[i + 1][j] + 1);
			}
		}
	}
	return 0;
}
