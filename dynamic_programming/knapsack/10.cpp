#include <bits/stdc++.h>
using namespace std;
#define INF 10000000

int main(int argc, char const *argv[])
{
	string S, T;
	cin >> S >> T;
	vector<vector<int>> dp(S.length() + 1, vector<int>(T.length() + 1, INF));
	for (int i = 0; i < S.length() + 1; i++)
		dp[i][0] = i;
	for (int j = 1; j < T.length() + 1; j++)
		dp[0][j] = j;
	for (int i = 0; i < S.length(); i++)
	{
		for (int j = 0; j < T.length(); j++)
		{
			if (S[i] == T[j])
				dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j]);
			else
				dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j] + 1);
			dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i][j + 1] + 1);
			dp[i + 1][j + 1] = min(dp[i + 1][j + 1], dp[i + 1][j] + 1);
		}
	}
	cout << dp[S.length()][T.length()] << endl;
	return 0;
}
