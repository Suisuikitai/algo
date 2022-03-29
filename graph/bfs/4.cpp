#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<vector<int>> G(N);
	for (int i = 0; i < M; i++)
	{
		int f, s;
		cin >> f >> s;
		G[s].push_back(f);
	}
	queue<int> que;
	int num = 0;
	for (int i = 0; i < N; i++)
	{
		if (G[i].size() == 0)
		{
			que.push(i);
			num++;
		}
	}
	while (!que.empty())
	{
		int t = que.front();
		que.pop();

		for (auto v : G[t])
		{
			if (G[v].size() == 0)
			{
				que.push(v);
				num++;
			}
		}
	}
	cout << num << endl;
	if (num == N)
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
