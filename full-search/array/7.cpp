#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int max;
	cin >> max;
	int ans = 0;
	for (int i = 1; i < N; i++)
	{
		int A;
		cin >> A;
		if (max < A)
		{
			max = A;
			ans = i;
		}
	}
	cout << ans << endl;
	return 0;
}
