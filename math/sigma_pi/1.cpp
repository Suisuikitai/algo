#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int ans = 0;
	for (int i = 1; i <= N; i++)
		ans += i;
	cout << ans << endl;
	return 0;
}
