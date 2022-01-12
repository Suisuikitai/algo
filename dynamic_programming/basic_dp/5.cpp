#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<int> A(N, 0);
	for (int &a : A)
		cin >> a;
	vector<int> dp(N, 0);
	dp[0] = 0;
	for (int i = 1; i < N; i++)
	{
		dp[i] = A[i] + dp[i - 1];
		for (int j = 2; j < M + 1; j++)
			if (i - j >= 0)
				dp[i] = min(dp[i], j * A[i] + dp[i - j]);
	}
	cout << dp[N - 1] << endl;
	return 0;
}
