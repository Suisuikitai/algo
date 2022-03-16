#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(N);
	vector<int> B(N);
	for (int &a : A)
		cin >> a;
	B = A;
	sort(A.begin(), A.end(), greater<int>());
	map<int, int> m;
	m[A[0]] = 0;
	for (int i = 1; i < N; i++)
		if (A[i - 1] != A[i])
			m[A[i]] = m[A[i - 1]] + 1;
	for (int &b : B)
		cout << m[b] << endl;
	return 0;
}
