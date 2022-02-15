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
	vector<int> dp(T + 2);
	return 0;
}
