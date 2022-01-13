#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<vector<int>> A(N, vector<int>(N, 0));
	for (int &a : A[0])
		cin >> a;
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			if (j - 1 >= 0)
				A[i][j] += A[i - 1][j - 1];
			if (j + 1 < N)
				A[i][j] += A[i - 1][j + 1];
			A[i][j] += A[i - 1][j];
			A[i][j] %= 100;
		}
	}
	cout << A[N - 1][N - 1] << endl;
	return 0;
}
