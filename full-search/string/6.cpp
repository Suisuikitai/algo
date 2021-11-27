#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string S;
	cin >> S;
	char c;
	cin >> c;
	if (S.find(c) == string::npos)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}
