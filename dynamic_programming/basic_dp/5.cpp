#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, M;
	cin >> N >> M;
	vector<int> A(N, 0);
	for (int &a : A)
		cin >> a;
	vector<int> T(N, 0);
	T[0] = 0;
	for (int i = 1; i < N; i++)
	{
		T[i] = T[i - 1] + A[i];
		for (int j = 1; j <= M; j++)
		{
			if (i - j < 0)
				break;
			T[i] = min(T[i], T[i - j] + A[i] * j);
		}
	}
	cout << T[N - 1] << endl;
	return 0;
}
