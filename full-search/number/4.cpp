#include <bits/stdc++.h>
using namespace std;

int main()
{
	int A, B;
	cin >> A >> B;
	if (A < B)
		swap(A, B);
	int ans = 1;
	for (int i = B; i > 1;)
	{
		int m = A % i;
		if (m == 0)
			ans = i;
		A = i;
		i = m;
	}
	cout << ans << endl;
	return 0;
}
