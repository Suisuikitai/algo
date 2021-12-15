#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int A, N;
	cin >> A >> N;
	int n = 1;
	for (int i = 0; i < N; i++)
		n *= 2;
	cout << (A & n) << endl;
	return 0;
}
