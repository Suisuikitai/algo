#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<vector<int>> G(N);
	vector<int> deg(N, 0);
	for (int i = 0; i < M; i++)
	{
		int f, s;
		cin >> f >> s;
		G[f].push_back(s);
		++deg[s];
	}
	queue<int> que;
	int num = 0;
	for (int i = 0; i < N; i++)
	{
		if (deg[i] == 0)
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
			--deg[v];
			if (deg[v] == 0)
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
