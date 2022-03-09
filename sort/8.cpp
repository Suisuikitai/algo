#include <bits/stdc++.h>
using namespace std;

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
		for (int k = x; 2 * k + 1 < N;)
		{
			int max = k;
			int maxa = A[k];
			if (maxa < A[2 * k + 1])
			{
				maxa = A[2 * k + 1];
				max = 2 * k + 1;
			}
			if (2 * k + 2 < N && maxa < A[2 * k + 2])
			{
				maxa = A[2 * k + 2];
				max = 2 * k + 2;
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
