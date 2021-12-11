#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int A;
	cin >> A;
	if (A % 3 == 0)
		cout << A * 2 / 3 << endl;
	else
		cout << -1 << endl;
	return 0;
}
