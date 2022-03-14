#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<double> A(N);
	for (double &a : A)
		cin >> a;

	sort(A.begin(), A.end());
	cout << fixed << setprecision(2);
	double ans = 0.0;
	if (N % 2 == 0)
		ans = A[N / 2 - 1] / 2.0 + A[N / 2] / 2.0;
	else
		ans = A[(N - 1) / 2];
	cout << ans << endl;
	return 0;
}
