#include <bits/stdc++.h>
using namespace std;

void random_quicksort(vector<int> A)
{
	int N = A.size();
	if (N == 1)
	{
		cout << A[0] << ' ';
		return;
	}
	int x = random() % N;
	vector<int> L, R;
	for (int i = 0; i < N; i++)
	{
		if (i == x)
			continue;
		if (A[i] < A[x])
			L.push_back(A[i]);
		else if (A[i] > A[x])
			R.push_back(A[i]);
		else if (random() % 2 == 0)
			L.push_back(A[i]);
		else
			R.push_back(A[i]);
	}
	if (L.size() > 0)
		random_quicksort(L);
	cout << A[x] << ' ';
	if (R.size() > 0)
		random_quicksort(R);
}

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	random_quicksort(A);
	cout << endl;
	return 0;
}
