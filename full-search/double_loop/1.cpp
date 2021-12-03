#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int count = 0;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		if (a == 2)
		{
			count++;
			continue;
		}
		if (a % 2 == 0 || a == 1)
			continue;
		int flg = 1;
		for (int n = 3; n <= sqrt(a); n += 2)
			if (a % n == 0)
			{
				flg = 0;
				break;
			}
		count += flg;
	}
	cout << count << endl;
	return 0;
}
