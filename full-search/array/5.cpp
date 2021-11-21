#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int pre;
	cin >> pre;
	int ans = 0;
	for (int i = 0; i < N - 1; i++)
	{
		int a;
		cin >> a;
		if (pre < a)
			ans++;
		pre = a;
	}
	cout << ans << endl;
	return 0;
}
