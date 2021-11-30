#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string S;
	cin >> S;
	char pre = S[0];
	int ans = 0;
	for (int i = 1; i <= S.length(); i++)
	{
		if (pre == S[i])
			ans++;
		pre = S[i];
	}
	cout << ans << endl;
	return 0;
}
