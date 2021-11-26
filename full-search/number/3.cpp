#include <bits/stdc++.h>
#include <math.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	if (N == 2)
	{
		cout << "Yes" << endl;
		return 0;
	}
	if (N % 2 == 0 || N == 1)
	{
		cout << "No" << endl;
		return 0;
	}
	for (int i = 3; i <= sqrt(N); i += 2)
		if (N % i == 0)
		{
			cout << "No" << endl;
			return 0;
		}
	cout << "Yes" << endl;
	return 0;
}
