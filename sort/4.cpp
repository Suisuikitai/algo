#include <bits/stdc++.h>
using namespace std;

void quicksort(vector<int> a)
{
	if (a.size() == 1)
	{
		cout << a[0] << ' ';
		return;
	}
	vector<int> l, r;
	int p = a.size() / 2;
	for (int i = 0; i < a.size(); i++)
	{
		if (i == p)
			continue;
		if (a[i] < a[p])
			l.push_back(a[i]);
		else
			r.push_back(a[i]);
	}
	if (l.size() > 0)
		quicksort(l);
	cout << a[p] << ' ';
	if (r.size() > 0)
		quicksort(r);
}

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	quicksort(A);
	cout << endl;
	return 0;
}
