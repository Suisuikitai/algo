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
	}
	for (int i = 0; i < N; i++)
	{
		sort(G[i].begin(), G[i].end());
		for (int j : G[i])
			cout << j << ' ';
		cout << endl;
	}
	return 0;
}
