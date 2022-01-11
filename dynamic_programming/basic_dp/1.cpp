#include <bits/stdc++.h>
#include <regex>
using namespace std;

int solve(int A0, int A1, int rec)
{
	if (rec == 1)
		return A0;
	return solve(A1, (A0 + A1) % 100, rec - 1);
}

int main(int argc, char const *argv[])
{
	int N, X, Y;
	cin >> N >> X >> Y;
	cout << solve(X, Y, N) << endl;
	return 0;
}
