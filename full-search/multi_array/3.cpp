#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int X, Y, Z;
	cin >> X >> Y >> Z;
	int A[X], B[Y], C[Z];
	for (int i = 0; i < X; i++)
		cin >> A[i];
	for (int i = 0; i < Y; i++)
		cin >> B[i];
	for (int i = 0; i < Z; i++)
		cin >> C[i];
	int ans = 0;
	for (int i = 0; i < X; i++)
		for (int j = 0; j < Y; j++)
			for (int k = 0; k < Z; k++)
				if (A[i] + B[j] == C[k])
					ans++;
	cout << ans << endl;
	return 0;
}
