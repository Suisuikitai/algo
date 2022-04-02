#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<int> a(N), b(M);
	vector<int> ans(1001, 0);
	while (N--)
	{
		int a;
		cin >> a;
		ans[a]++;
	}
	while (M--)
	{
		int b;
		cin >> b;
		ans[b]++;
	}
	for (int i = 1; i <= ans.size(); i++)
		if (ans[i] == 2)
			cout << i << endl;
	return 0;
}
