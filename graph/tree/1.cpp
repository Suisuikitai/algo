#include <bits/stdc++.h>
using namespace std;

int rec(vector<int> A, int v)
{
	if (v == 0)
		return 1;
	return rec(A, A[v - 1]) + 1;
}

int main(int argc, char const *argv[])
{
	int N, X;
	cin >> N >> X;
	vector<int> A(N - 1);
	for (int &a : A)
		cin >> a;
	int ans = rec(A, A[X - 1]);
	cout << ans << endl;
	return 0;
}
