#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int U, T, A;
	cin >> U >> T >> A;
	cout << U + (A - U - 1 + T) / T * T << endl;
	return 0;
}
