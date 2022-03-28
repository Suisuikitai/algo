#include <bits/stdc++.h>
using namespace std;

using Graph = vector<vector<int>>;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	Graph G(N);
	for (int i = 0; i < M; i++)
	{
		int A, B;
		cin >> A >> B;
		G[A].push_back(B);
		G[B].push_back(A);
	}
	vector<int> d(N, -1);
	d[0] = 0;
	queue<int> que;
	que.push(0);
	while (!que.empty())
	{
		int v = que.front();
		que.pop();
		for (int &nv : G[v])
		{
			if (d[nv] != -1)
				continue;
			d[nv] = d[v] + 1;
			que.push(nv);
		}
	}
	int ans = 0;
	for (int &i : d)
		ans = max(i, ans);
	cout << ans << endl;
	return 0;
}
