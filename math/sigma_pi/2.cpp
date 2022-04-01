#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int L, R;
	cin >> L >> R;
	int ans = 0;
	for (int i = L; i <= R; i++)
		ans += (2 * i - 1) * (2 * i - 1);
	cout << ans << endl;
	return 0;
}
