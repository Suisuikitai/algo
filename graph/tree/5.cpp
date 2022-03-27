#include <bits/stdc++.h>
using namespace std;

int rec(vector<vector<int>> &P, vector<int> &count, int v)
{
	if (P[v].size() == 0)
		count[v] = 0;
	for (int &i : P[v])
		count[v] += rec(P, count, i) + 1;
	return count[v];
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
	vector<int> count(N);
	rec(P, count, 0);
	for (int i = 0; i < N; i++)
		cout << count[i] << endl;
	return 0;
}
