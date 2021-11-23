#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int A[10];
	for (int i = 0; i < 10; i++)
		A[i] = 0;
	for (int i = 0; i < N; i++)
	{
		int a;
		cin >> a;
		A[a]++;
	}
	for (int i = 1; i < 10; i++)
		cout << A[i] << endl;
	return 0;
}
