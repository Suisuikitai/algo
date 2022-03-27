#include <bits/stdc++.h>
using namespace std;
void rec(int v, vector<vector<int>> &P)
{
	cout << v << ' ';
	for (int &i : P[v])
		rec(i, P);
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
	rec(0, P);
	cout << endl;
	return 0;
}
