#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int L, R;
	cin >> L >> R;
	int ans = 0;
	for (int i = L; i < R; i++)
		for (int j = i + 10; j <= R; j += 10)
			ans++;
	cout << ans << endl;
	return 0;
}
