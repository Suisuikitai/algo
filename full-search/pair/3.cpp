#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int A[N];
	for (int i = 0; i < N; i++)
		cin >> A[i];
	int ans = 0;
	for (int i = 0; i < N - 2; i++)
		for (int j = i + 1; j < N - 1; j++)
			if (A[i] <= A[j])
				for (int k = j + 1; k < N; k++)
					if (A[j] >= A[k])
						ans++;
	cout << ans << endl;
	return 0;
}
