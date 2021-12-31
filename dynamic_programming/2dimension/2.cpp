#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int A[N][N];
	for (int &a : A[0])
		cin >> a;
	for (int i = 1; i < N; i++)
	{
		for (int j = 0; j < N; j++)
		{
			A[i][j] = A[i - 1][j];
			if (j > 0)
				A[i][j] += A[i - 1][j - 1];
			if (j + 1 < N)
				A[i][j] += A[i - 1][j + 1];
			A[i][j] %= 100;
		}
	}
	cout << A[N - 1][N - 1] << endl;
	return 0;
}
