#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int A, B;
	cin >> A >> B;
	if ((A + B) % 2 == 0)
		cout << (A + B) / 2 << endl;
	else
		cout << -1 << endl;
	return 0;
}
