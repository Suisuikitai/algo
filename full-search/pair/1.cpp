#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, K;
	cin >> N >> K;
	int A[N];
	for (int i = 0; i < N; i++)
		cin >> A[i];
	int ans = 0;
	for (int i = 0; i < N; i++)
		for (int j = i + 1; j < N; j++)
			if (A[i] + A[j] <= K)
				ans++;
	cout << ans << endl;
	return 0;
}
