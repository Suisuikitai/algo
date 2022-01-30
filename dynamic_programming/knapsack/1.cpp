#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	vector<int> dp(N + 1, 0);
	for (int i = 0; i < N; i++)
		dp[i + 1] = max(dp[i], dp[i] + A[i]);
	cout << dp[N] << endl;
	return 0;
}
