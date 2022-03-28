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
	//未探索のノードは-1
	vector<bool> done(N, false);
	//出力するノード
	//何番目に何を探索したか
	vector<vector<int>> node(N);
	done[0] = true;
	node[0] = {0};
	for (int k = 1; k < N; k++)
	{
		for (auto &v : node[k - 1])
		{
			for (auto &next_v : G[v])
			{
				if (done[next_v])
					continue;
				done[next_v] = true;
				node[k].push_back(next_v);
			}
		}
	}
	for (int i = 0; i < N; i++)
	{
		sort(node[i].begin(), node[i].end());
		for (int &a : node[i])
			cout << a << ' ';
		cout << endl;
	}
	return 0;
}
