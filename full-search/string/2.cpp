#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	string S;
	cin >> S;
	int len = S.length();
	int left = 0;
	int right = S.length() - 1;
	while (S[left] == S[right])
		left++, right--;
	if (left < right)
		cout << "No" << endl;
	else
		cout << "Yes" << endl;
	return 0;
}
