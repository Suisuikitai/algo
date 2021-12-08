#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int A, K;
	cin >> A >> K;
	cout << ((A + K - 1) / K) * K << endl;
	return 0;
}
