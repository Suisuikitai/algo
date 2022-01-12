#include <bits/stdc++.h>
#include <regex>
using namespace std;

int solve(int a1, int a2, int a3, int N)
{
	if (N == 3)
		return a3;
	return solve(a2, a3, a3 + a2 + a1, N - 1);
}

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	if (N == 1)
		cout << 1 << endl;
	else if (N == 2)
		cout << 2 << endl;
	else
		cout << solve(1, 2, 4, N) << endl;
	return 0;
}
