#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string S, T;
	cin >> S >> T;
	int slen = S.length(), tlen = T.length();
	vector<vector<int>> dp(slen + 1, vector<int>(tlen + 1, 0));
	for (int i = 0; i < slen; i++)
	{
		for (int j = 0; j < tlen; j++)
		{
			dp[i + 1][j + 1] = max(dp[i + 1][j], dp[i][j + 1]);
			if (S[i] == T[j])
				dp[i + 1][j + 1] = max(dp[i][j] + 1, dp[i + 1][j + 1]);
		}
	}
	cout << dp[slen][tlen] << endl;
	return 0;
}
