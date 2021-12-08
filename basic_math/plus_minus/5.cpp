#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int A, B;
	cin >> A >> B;
	if ((A + B) % 2 != 0 || A < B)
		cout << -1 << endl;
	else
		cout << (A + B) / 2 << endl;
	return 0;
}
