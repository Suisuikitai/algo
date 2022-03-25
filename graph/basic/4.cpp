#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M, X;
	cin >> N >> M >> X;
	vector<vector<int>> G(N);
	for (int i = 0; i < M; i++)
	{
		int A, B;
		cin >> A >> B;
		G[A].push_back(B);
		G[B].push_back(A);
	}
	set<int> s;
	for (int i : G[X])
		s.insert(i);
	set<int> result;
	for (int i : G[X])
		for (int j : G[i])
			if (j != X && s.count(j) != 1)
				result.insert(j);
	cout << result.size() << endl;
	return 0;
}
