#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	vector<int> dp(N, 0);
	dp[0] = 0;
	dp[1] = A[1];
	for (int i = 2; i < N; i++)
		dp[i] = min(A[i] + dp[i - 1], A[i] * 2 + dp[i - 2]);
	cout << dp[N - 1] << endl;
	return 0;
}
