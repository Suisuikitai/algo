#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> W(N);
	int M = 0;
	for (int &w : W)
	{
		cin >> w;
		M += w;
	}
	vector<vector<bool>> dp(N + 1, vector<bool>(M + 1, false));
	dp[0][0] = true;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < M + 1; j++)
		{
			if (!dp[i][j])
				continue;
			dp[i + 1][j + W[i]] = true;
			dp[i + 1][abs(j - W[i])] = true;
		}
	}
	int i = 0;
	while (!dp[N][i])
		i++;
	cout << i << endl;
	return 0;
}
