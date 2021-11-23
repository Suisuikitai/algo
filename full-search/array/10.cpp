#include <bits/stdc++.h>
using namespace std;

int main()
{
	int count[10];
	for (int i = 0; i < 10; i++)
		count[i] = 0;
	int N;
	cin >> N;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		count[a]++;
	}
	int ans;
	int max = -1;
	for (int i = 1; i < 10; i++)
	{
		if (max < count[i])
		{
			max = count[i];
			ans = i;
		}
	}
	cout << ans << endl;
	return 0;
}