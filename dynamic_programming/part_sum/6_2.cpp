#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, A, B;
	cin >> N >> A >> B;
	vector<int> X(N);
	for (int &x : X)
		cin >> x;
	vector<vector<bool>> dp(N + 1, vector<bool>(A + 1, false));
	dp[0][0] = true;
	for (int i = 0; i < N; i++)
	{
		for (int j = 0; j < A + 1; j++)
		{
			if (dp[i][j] == false)
				continue;
			dp[i + 1][j] = true;
			dp[i + 1][(j + X[i]) % A] = true;
		}
	}
	if (dp[N][B])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
