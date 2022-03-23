#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	long long N, K;
	cin >> N >> K;
	vector<pair<long long, long long>> S(N);
	for (int i = 0; i < N; i++)
		cin >> S[i].first >> S[i].second;
	sort(S.begin(), S.end());
	long long ans = 0;
	long long count = 0;
	for (int i = 0; i < N; i++)
	{
		if (count >= K)
			break;
		ans += min(K - count, S[i].second) * S[i].first;
		count += S[i].second;
	}
	cout << ans << endl;
	return 0;
}
