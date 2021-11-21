#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, V;
	cin >> N >> V;
	int ans = 0;
	int a;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		if (a == V)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
