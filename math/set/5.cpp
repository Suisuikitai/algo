#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<int> ans(10001, 0);
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		ans[a]++;
	}
	for (int i = 0; i < M; i++)
	{
		int b;
		cin >> b;
		ans[b]++;
	}
	for (int i = 1; i < 10001; i++)
		if (ans[i] == 1)
			cout << i << endl;
	return 0;
}
