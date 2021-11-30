#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	string S, T;
	cin >> N >> S >> T;
	int ans = 0;
	for (int i = 0; i < N; i++)
		if (S[i] != T[i])
			ans++;
	cout << ans << endl;
	return 0;
}
