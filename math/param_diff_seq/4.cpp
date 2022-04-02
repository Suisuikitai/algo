#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long N, X, d;
	cin >> N >> X >> d;
	long long ans = (X + (X + (N - 1) * d)) * N / 2;
	cout << ans << endl;
	return 0;
}
