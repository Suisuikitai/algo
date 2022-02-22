#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int T;
	cin >> T;
	vector<vector<int>> g(T, vector<int>(T));
	for (int i = 0; i < T; i++)
		for (int j = 0; j < T; j++)
			cin >> g[i][j];
	return 0;
}
