#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	vector<vector<bool>> dp(N + 1, vector<bool>(M + 1, false));
	dp[0][0] = true;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M + 1; j++)
		{
			if (!dp[i][j])
				continue;
			dp[i + 1][j] = true;
			if (j + A[i] < M + 1)
				dp[i + 1][j + A[i]] = true;
		}
	bool res = false;
	for (int i = 0; i < N + 1; i++)
		if (dp[i][M])
		{
			res = true;
			break;
		}
	if (res)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
