#include <bits/stdc++.h>
using namespace std;

void sort(vector<int> &A, int x)
{
	if (x < 0)
		return;
	int k = x;
	if (2 * k + 1 < A.size())
		if (A[k] < A[x * 2 + 1])
		{
			swap(A[k], A[x * 2 + 1]);
			sort(A, x * 2 + 1);
		}
	if (2 * k + 2 < A.size())
		if (A[k] < A[x * 2 + 2])
		{
			swap(A[k], A[x * 2 + 2]);
			sort(A, x * 2 + 2);
		}
	sort(A, --x);
}

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	int x = N / 2;
	while (--x >= 0)
	{
		for (int k = x; k * 2 + 1 < N;)
		{
			int max = k;
			int maxa = A[k];
			if (maxa < A[k * 2 + 1])
			{
				maxa = A[k * 2 + 1];
				max = k * 2 + 1;
			}
			if (k * 2 + 2 < N && maxa < A[k * 2 + 2])
			{
				maxa = A[k * 2 + 2];
				max = k * 2 + 2;
			}
			if (k == max)
				break;
			swap(A[k], A[max]);
			k = max;
		}
	}
	for (int &a : A)
		cout << a << ' ';
	cout << endl;
	return 0;
}
