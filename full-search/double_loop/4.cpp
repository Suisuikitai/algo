#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string S;
	cin >> S;
	map<char, int> m;
	for (char i = 'a'; i <= 'z'; i++)
		m[i] = 0;
	for (int i = 0; i < S.length(); i++)
		m[S[i]] = 1;
	int ans = 0;
	for (char i = 'a'; i <= 'z'; i++)
		ans += m[i];
	cout << ans << endl;
	return 0;
}
