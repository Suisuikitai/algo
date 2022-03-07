#include <bits/stdc++.h>
using namespace std;

void mergesort(vector<int> &a, int left, int right)
{
	if (right - left < 2)
		return;
	int mid = (right - left) / 2;
	mergesort(a, left, mid);
	mergesort(a, mid, right);

	//ここの工夫まじでうまい
	vector<int> buf;
	for (int i = left; i < mid; i++)
		buf.push_back(a[i]);
	for (int i = right - 1; i >= mid; i--)
		buf.push_back(a[i]);

	int iterator_left = 0;
	int iterator_right = (int)buf.size() - 1;
	for (int i = left; i < right; ++i)
	{
		if (buf[iterator_left] <= buf[iterator_right])
			a[i] = buf[iterator_left++];
		else
			a[i] = buf[iterator_right--];
	}
}

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	mergesort(A, 0, N);
	return 0;
}
