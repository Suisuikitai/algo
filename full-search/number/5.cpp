#include <bits/stdc++.h>
using namespace std;

int main()
{
	int N;
	cin >> N;
	for (int i = 1; i < N + 1; i++)
	{
		string ans = "";
		if (i % 3 == 0)
			ans = "Fizz";
		if (i % 5 == 0)
			ans += "Buzz";
		if (ans.length() > 0)
			cout << ans << endl;
		else
			cout << i << endl;
	}
	return 0;
}
