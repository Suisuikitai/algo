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
		for (int k = x; k * 2 + 1 < N;)
		{
			int max = k;
			int maxa = A[k];
			if (maxa < A[k * 2 + 1])
			{
				maxa = A[k * 2 + 1];
				max = k * 2 + 1;
				swap(A[k], A[max]);
			}
			if (k * 2 + 2 < N && maxa < A[k * 2 + 2])
			{
				maxa = A[k * 2 + 2];
				max = k * 2 + 2;
				swap(A[k], A[max]);
			}
			if (k == max)
				break;
			k = max;
		}
	}
	for (int &a : A)
		cout << a << ' ';
	cout << endl;
	return 0;
}
