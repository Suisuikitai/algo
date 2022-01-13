#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	vector<vector<int>> A(4, vector<int>(4, 0));
	for (int &a : A[0])
		cin >> a;
	for (int i = 1; i < 4; i++)
		for (int j = 0; j < 4; j++)
		{
			if (j - 1 >= 0)
				A[i][j] += A[i - 1][j - 1];
			A[i][j] += A[i - 1][j];
			if (j + 1 < 4)
				A[i][j] += A[i - 1][j + 1];
		}
	cout << A[3][3] << endl;
	return 0;
}
