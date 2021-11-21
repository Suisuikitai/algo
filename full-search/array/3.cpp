#include <bits/stdc++.h>
using namespace std;
int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int ans = 0;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		if (a > 0)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
