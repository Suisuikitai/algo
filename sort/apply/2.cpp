#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<int> A(N);
	vector<int> X(M);
	for (int &a : A)
		cin >> a;
	for (int &a : X)
		cin >> a;
	sort(A.begin(), A.end());
	for (int &i : X)
		cout << A[i] << endl;
	return 0;
}
