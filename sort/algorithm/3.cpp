#include <bits/stdc++.h>
using namespace std;

void out(vector<int> a, int n)
{
	for (int i = 0; i < n; i++)
		cout << a[i] << ' ';
}

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;

	for (int k = 1; k < N; k++)
	{
		int pos = k;
		while (pos != 0 && A[pos - 1] > A[pos])
		{
			swap(A[pos - 1], A[pos]);
			pos--;
		}
		out(A, N);
		cout << endl;
	}
	return 0;
}
