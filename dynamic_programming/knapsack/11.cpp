#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;
	vector<vector<int>> g(T, vector<int>(T));
	for (int i = 0; i < T; i++)
		for (int j = 0; j < T; j++)
			cin >> g[i][j];
	vector<int> dp(T + 2, 0);
	for (int t = 1; t < T + 2; T++)
	{
		for (int i = 0; i < t; i++)
		{
			for (int j = i + 1; j < t; j++)
				dp[t] = max(dp[t], dp[t - 1] + g[i][j - 1]);
		}
	}
	return 0;
}
