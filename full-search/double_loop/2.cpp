#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, K;
	cin >> N >> K;
	int ans = 0;
	for (int i = 1; i <= N; i++)
	{
		int count = 0;
		for (int j = 1; j <= N; j++)
			if (i % j == 0)
				count++;
		if (count == K)
			ans++;
	}
	cout << ans << endl;
	return 0;
}
