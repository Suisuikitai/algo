#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string S, T;
	cin >> S >> T;
	int len = T.length();
	for (int i = 0; i < S.length() - len; i++)
		if (S.substr(i, len) == T)
		{
			cout << "Yes" << endl;
			return 0;
		}
	cout << "No" << endl;
	return 0;
}
