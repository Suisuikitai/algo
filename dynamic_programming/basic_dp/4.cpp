#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> A(31, 0);
	A[0] = 0;
	A[1] = 1;
	A[2] = 2;
	A[3] = 4;
	for (int i = 4; i <= N; i++)
		A[i] = A[i - 1] + A[i - 2] + A[i - 3];
	cout << A[N] << endl;
	return 0;
}
