#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int dp[N][N];
	dp[0][0] = 1;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < N; j++)
			if (j == 0 || i == 0)
				dp[i][j] = 1;
			else
				dp[i][j] = dp[i - 1][j] + dp[i][j - 1];
	cout << dp[N - 1][N - 1] << endl;
	return 0;
}
