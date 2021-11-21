#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, V;
	cin >> N >> V;
	int a;
	cin >> a;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		if (a == V)
		{
			cout << "Yes" << endl;
			return 0;
		}
	}
	cout << "No" << endl;
	return 0;
}
