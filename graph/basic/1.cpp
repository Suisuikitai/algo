#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N, A, B;
	cin >> N >> A >> B;
	vector<string> S(N);
	for (int i = 0; i < N; i++)
		cin >> S[i];
	if (S[A][B] == 'o')
		cout << "Yes";
	else
		cout << "No";
	cout << endl;
}
