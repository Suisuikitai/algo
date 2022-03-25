#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<vector<int>> G(N);
	for (int i = 0; i < M; i++)
	{
		int A, B;
		cin >> A >> B;
		G[A].push_back(B);
		G[B].push_back(A);
	}
	int ma = 0;
	int index = 0;
	for (int i = 0; i < N; i++)
	{
		if (ma < G[i].size())
		{
			ma = G[i].size();
			index = i;
		}
	}
	sort(G[index].begin(), G[index].end());
	for (int &i : G[index])
		cout << i << ' ' << endl;
	cout << endl;
	return 0;
}
