#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int A, N;
	cin >> A >> N;
	cout << (A | (1 << N)) << endl;
	return 0;
}
