#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, A, B;
	cin >> N >> A >> B;
	int X[N];
	for (int i = 0; i < N; i++)
	{
		int tmp;
		cin >> tmp;
		X[i] = tmp % A;
	}
	int dp[N + 1][A];
	for (int i = 0; i < N + 1; i++)
		for (int j = 0; j < A; j++)
			dp[i][j] = -1;
	dp[0][0] = 1;
	//インデックス番号のいくつまで使うか
	for (int i = 0; i < N; i++)
	{
		//あまり
		for (int j = 0; j < A; j++)
		{
			if (dp[i][j] != 1)
				continue;
			dp[i + 1][j] = 1;
			int index = (j + X[i]) % A;
			dp[i + 1][index] = 1;
		}
	}
	for (int i = 0; i < N + 1; i++)
	{
		if (dp[N][B] == 1)
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
