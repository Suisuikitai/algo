#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	int x = N / 3;
	int y = N / 5;
	int z = N / 15;
	cout << N - (x + y) + z << endl;
	return 0;
}
