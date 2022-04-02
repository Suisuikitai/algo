#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, X, Y;
	cin >> N >> X >> Y;
	vector<int> used(N + 1, 0);
	for (int i = 0; i < X; i++)
	{
		int a;
		cin >> a;
		used[a]++;
	}
	for (int i = 0; i < Y; i++)
	{
		int b;
		cin >> b;
		used[b]++;
	}
	int ans = 0;
	for (int i = 1; i < N + 1; i++)
		if (used[i] == 0)
			ans++;
	cout << ans << endl;
	return 0;
}
