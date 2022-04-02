#include <bits/stdc++.h>
using namespace std;

int gcd(int x, int y)
{
	if (y == 0)
		return x;
	else
		return gcd(y, x % y);
}

int lcm(int x, int y)
{
	int d = gcd(x, y);
	return x / d * y;
}

int main(int argc, char const *argv[])
{
	int N, X, Y;
	cin >> N >> X >> Y;
	if (X > Y)
		cout << N / lcm(X, Y) << endl;
	else
		cout << N / lcm(Y, X) << endl;
	return 0;
}
