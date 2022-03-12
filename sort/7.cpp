#include <bits/stdc++.h>
using namespace std;
void heap_sort(vector<int> &A, int N)
{
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
}

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	heap_sort(A, N);
	for (int &a : A)
		cout << a << ' ';
	cout << endl;
	return 0;
}
