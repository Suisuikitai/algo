#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int ans = 0;
	for (int i = 1; i < N + 1; i++)
		if (i % 2 != 0 && i % 3 != 0 && i % 5 != 0)
			ans++;
	cout << ans << endl;
	return 0;
}