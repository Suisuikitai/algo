#include <bits/stdc++.h>
using namespace std;

int rec(vector<vector<int>> &P, int depth, int v)
{
	int d = depth;
	for (int &p : P[v])
		d = max(rec(P, depth + 1, p), d);
	return d;
}

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<vector<int>> P(N);
	for (int i = 1; i < N; i++)
	{
		int a;
		cin >> a;
		P[a].push_back(i);
	}
	int depth = rec(P, 0, 0);
	cout << depth << endl;
	return 0;
}
