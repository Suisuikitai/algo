#include <bits/stdc++.h>
using namespace std;

void out(vector<int> a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
	cout << endl;
}

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	for (int k = 0; k < N - 1; k++)
	{
		int xm = k;
		for (int l = k + 1; l < N; l++)
			if (A[l] < A[xm])
				xm = l;
		if (xm != k)
		{
			swap(A[xm], A[k]);
		}
		out(A, N);
	}
	return 0;
}
