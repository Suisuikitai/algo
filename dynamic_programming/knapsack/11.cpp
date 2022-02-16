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
	// dp[i]を区間x, i-1を選ばなかった場合の累計の最大値とするのであれば
	//区間0-vの最大値を求めるときその最大値を表すのはdpを使用すると
	// dp[v+1]と表すことができる
	//	つまり、この問題で求めるべき答えはdp[T+1]に格納する値
	//この思考の手間を減らすためにT+2にしているのではなく110にしているってこと？
	//　それともメモリの取り方の話？
	vector<int> dp(T + 2, 0);
	dp[1] = max(dp[1], dp[0] + g[0][1]);
	dp[2] = max(dp[2], dp[1] + g[0][1]);
	dp[2] = max(dp[2], dp[1] + g[0][2]);
	dp[2] = max(dp[2], dp[1] + g[1][2]);
	dp[2] = max(dp[2], dp[1] + g[1][2]);
	//求めるdpのインデックス
	// 1~T+1
	// i番目はi-1を選ばなかった場合の最大値
	for (int t = 1; t < T + 2; t++)
	{
		// iは漸化式で出てくるgの第一配列のインデックス
		// 区間の左側
		for (int i = 0; i < t; i++)
		{
			// jは漸化式で出てくるgの第二配列のインデックス
			// 区間の右側
			for (int j = i + 1; j < t; j++)
				dp[t] = max(dp[t], dp[i] + g[i][j - 1]);
		}
	}
	cout << dp[T + 1] << endl;
	return 0;
}
