#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int ans = 0;
	for (int i = 1; i < N + 1; i++)
		if (N % i == 0)
			ans++;
	cout << ans << endl;
	return 0;
}
