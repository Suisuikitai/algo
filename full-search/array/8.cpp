#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int min = 100;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		if (min > a)
			min = a;
	}
	cout << min << endl;
	return 0;
}
