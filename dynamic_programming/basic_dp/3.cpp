#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(N + 1);
	A[0] = 1, A[1] = 1;
	for (int i = 2; i < N + 1; i++)
		A[i] = A[i - 1] + A[i - 2];
	cout << A[N] << endl;
	return 0;
}
