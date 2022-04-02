#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(N);
	int ans = 1;
	while (N-- > 0)
	{
		int a;
		cin >> a;
		ans = ans * a % 10;
	}
	cout << ans << endl;
	return 0;
}
