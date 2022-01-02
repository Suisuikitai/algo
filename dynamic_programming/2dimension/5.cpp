#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	string S[N];
	for (int i = 0; i < N; i++)
		cin >> S[i];
	int dp[N][N];
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			dp[i][j] = 0;
	dp[0][0] = 1;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (S[i][j] == '#')
			{
				dp[i][j] = 0;
				continue;
			}
			if (i - 1 >= 0)
				dp[i][j] += dp[i - 1][j];
			if (j - 1 >= 0)
				dp[i][j] += dp[i][j - 1];
		}
	}
	cout << dp[N - 1][N - 1] << endl;
	return 0;
}