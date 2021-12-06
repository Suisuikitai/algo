#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	string S[N];
	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		cin >> S[i];
		bool flg = true;
		for (int j = 0; j < S[i].length() / 2; j++)
			if (S[i][j] != S[i][S[i].length() - 1 - j])
			{
				flg = false;
				break;
			}
		if (flg)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
