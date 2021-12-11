#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int A, K;
	cin >> A >> K;
	if (A % (K + 1) != 0)
		cout << -1 << endl;
	else
		cout << A * K / (K + 1) << endl;

	return 0;
}
