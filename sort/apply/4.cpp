#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, K;
	cin >> N >> K;
	vector<long long> A(N);
	for (long long &a : A)
		cin >> a;
	sort(A.begin(), A.end());
	long long ans = 1LL << 60;
	for (int i = N - 1; i - (K - 1) >= 0; i--)
	{
		if (abs(A[i] - A[i - (K - 1)]) < ans)
			ans = abs(A[i] - A[i - (K - 1)]);
	}
	cout << ans << endl;
	return 0;
}