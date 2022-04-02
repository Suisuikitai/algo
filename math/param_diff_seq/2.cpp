#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int A, B, X, Y;
	cin >> A >> B >> X >> Y;
	int d = (Y - X) / (B - A);
	cout << X - d * A << endl;
	return 0;
}
