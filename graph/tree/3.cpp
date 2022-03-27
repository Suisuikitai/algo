#include <bits/stdc++.h>
using namespace std;

void rec(vector<vector<int>> &P, vector<int> &depth, int v, int d)
{
	depth[v] = d;
	for (int &i : P[v])
		rec(P, depth, i, d + 1);
}

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<vector<int>> P(N);
	for (int i = 1; i < N; i++)
	{
		int p;
		cin >> p;
		P[p].push_back(i);
	}
	vector<int> depth(N);
	rec(P, depth, 0, 0);
	for (int &d : depth)
		cout << d << endl;
	return 0;
}
