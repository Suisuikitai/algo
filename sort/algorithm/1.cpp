#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	while (true)
	{
		bool changed = false;
		for (int i = 0; i < N - 1; i++)
		{
			if (A[i] > A[i + 1])
			{
				int a = A[i];
				A[i] = A[i + 1];
				A[i + 1] = a;
				changed = true;
			}
		}
		if (changed)
			for (int i = 0; i < N; i++)
				cout << A[i] << ' ';
		else
			break;
		cout << endl;
	}
	return 0;
}
