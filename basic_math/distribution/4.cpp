#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int A, B, K;
	cin >> A >> B >> K;
	int x = 0, y = 0;
	x = (K * B + A) / (K + 1);
	y = B - x;
	if (x >= 0 && y >= 0 && (K * B + A) % (K + 1) == 0)
		cout << x << endl;
	else
		cout << -1 << endl;
	return 0;
}
