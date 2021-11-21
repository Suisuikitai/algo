#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int ans;
	cin >> ans;
	for (int i = 0; i < N - 1; i++)
	{
		int a;
		cin >> a;
		if (ans < a)
			ans = a;
	}
	cout << ans << endl;
	return 0;
}
