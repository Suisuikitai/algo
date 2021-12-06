#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M, K;
	cin >> N >> M >> K;
	int A[N];
	int B[M];
	for (int i = 0; i < N; i++)
		cin >> A[i];
	for (int i = 0; i < M; i++)
		cin >> B[i];
	int ans = 0;
	for (int i = 0; i < N; i++)
		for (int j = 0; j < M; j++)
			if (A[i] + B[j] == K)
				ans++;
	cout << ans << endl;
	return 0;
}
