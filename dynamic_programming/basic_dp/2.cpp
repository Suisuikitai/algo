#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(N);
	for (int &a : A)
		cin >> a;
	vector<int> T(N);
	T[0] = 0, T[1] = A[1];
	for (int i = 2; i < N; i++)
		T[i] = min(T[i - 1] + A[i], T[i - 2] + A[i] * 2);
	cout << T[N - 1] << endl;
	return 0;
}
