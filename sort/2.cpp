#include <bits/stdc++.h>
using namespace std;

void out(int N, int A)
{
	for (int i = 0; i < N; i++)
	{
		cout <<
	}
}

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	for (int k = 0; k < N; k++)
	{
		int m = A[k];
		int v = 0;
		for (int i = k + 1; i < N; i++)
		{
			if (A[i] < m)
				v = i;
		}
		swap(A[k], A[v]);
	}
	return 0;
}
