#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, K;
	cin >> N >> K;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	sort(A.begin(), A.end());
	int ans = 0;
	for (int i = 0; i < K; i++)
		ans += A[N - 1 - i];
	cout << ans << endl;
	return 0;
}
