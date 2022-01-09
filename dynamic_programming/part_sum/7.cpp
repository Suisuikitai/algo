#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N = 0;
	cin >> N;
	int W[N];
	int max = 0;
	for (int &w : W)
	{
		cin >> w;
		max += w;
	}

	bool dp[N + 1][max + 1];
	for (int i = 0; i < N + 1; i++)
		for (int j = 0; j < max + 1; j++)
			dp[i][j] = false;

	dp[0][0] = true;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < max + 1; j++)
		{
			if (!dp[i][j])
				continue;
			dp[i + 1][j + W[i]] = true;
			dp[i + 1][abs(j - W[i])] = true;
		}
	}
	int res = 0;
	while (!dp[N][res])
		res++;
	cout << res << endl;
	return 0;
}
