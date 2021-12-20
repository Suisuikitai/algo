#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, X, Y;
	cin >> N >> X >> Y;
	vector<int> A(N, 0);
	A[0] = X;
	A[1] = Y;
	for (int i = 2; i < N; i++)
		A[i] = (A[i - 2] + A[i - 1]) % 100;
	cout << A[N - 1] << endl;
	return 0;
}
