#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int A, B, K;
	cin >> A >> B >> K;
	int x, y;
	x = (K * B - A) / (1 + K);
	y = B - x;
	if ((K * B - A) % (1 + K) == 0 && x >= 0 && y >= 0)
		cout << x << endl;
	else
		cout << -1 << endl;
	return 0;
}
