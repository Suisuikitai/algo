#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int L, R;
	cin >> L >> R;
	int count = 0;
	for (int i = L; i <= R; i++)
	{
		string S = to_string(i);
		int add = 1;
		int size = S.size();

		for (int i = 0; i < size; i++)
			if (S[i] != S[size - 1 - i])
				add = 0;
		count += add;
	}
	cout << count << endl;
	return 0;
}
