#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<int> A(N);
	vector<int> B(M);
	for (int &a : A)
		cin >> a;
	for (int &b : B)
		cin >> b;
	int ans = 0;
	for (int &a : A)
		for (int &b : B)
			ans += a + b;
	cout << ans << endl;
	return 0;
}
