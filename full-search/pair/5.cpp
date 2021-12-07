#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	string S;
	cin >> S;
	int ans = 0;
	for (int i = 0; i < N; i++)
		for (int j = i + 1; j < N; j++)
			if (S[i] == S[j])
				ans++;
	cout << ans << endl;
	return 0;
}
