#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, V;
	cin >> N >> V;
	int ans = -1;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		if (a == V)
			ans = i;
	}
	cout << ans << endl;
	return 0;
}
