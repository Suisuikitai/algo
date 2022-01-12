#include <bits/stdc++.h>
#include <regex>
using namespace std;

int solve(int a1, int a2, int N)
{
	if (N - 1 == 0)
		return a1 + a2;
	return solve(a1 + a2, a1, N - 1);
}

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	cout << solve(1, 0, N) << endl;
	return 0;
}
