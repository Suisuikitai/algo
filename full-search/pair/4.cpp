#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	string S[N];
	for (int i = 0; i < N; i++)
		cin >> S[i];
	for (int i = 0; i < N; i++)
		for (int j = i + 1; j < N; j++)
			if (S[i].compare(S[j]) == 0)
			{
				cout << "Yes" << endl;
				return 0;
			}
	cout << "No" << endl;
	return 0;
}
