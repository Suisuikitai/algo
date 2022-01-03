#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	int W[N];
	for (int i = 0; i < N; i++)
		cin >> W[i];
	int dp[N + 1][M + 1];
	for (int i = 0; i < N + 1; i++)
		for (int j = 0; j < M + 1; j++)
			dp[i][j] = 0;
	dp[0][0] = 1;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M + 1; j++)
		{
			if (!dp[i][j])
				continue;
			dp[i + 1][j] = 1;
			if (j + W[i] <= M)
				dp[i + 1][j + W[i]] = 1;
		}
	}
	if (dp[N][M])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
