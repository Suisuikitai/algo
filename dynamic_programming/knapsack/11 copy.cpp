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

	vector<int> dp(110, 0);
	// 0~Tを1始まりにしたら1~T+1になった
	for (int t = 1; t <= T + 1; t++)
		// iはtの手前まで増加させる。漸化式で使用する
		for (int i = 0; i < t; i++)
			for (int j = i + 1; j < t; j++)
				dp[t] = max(dp[t], dp[i] + g[i][j - 1]);
	cout << dp[T + 1] << endl;
	return 0;
}
