#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<int> D(M, 0);
	for (int &d : D)
		cin >> d;
	vector<bool> dp(N + 1, false);
	dp[0] = true;
	for (int i = 1; i < N + 1; i++)
	{
		for (int j = 0; j < M; j++)
		{
			if (i - D[j] >= 0 && dp[i - D[j]] == true)
			{
				dp[i] = true;
				break;
			}
		}
	}
	if (dp[N])
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
