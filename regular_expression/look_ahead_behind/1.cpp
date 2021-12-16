#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
	string S;
	cin >> S;
	regex reg{R"(ru(?=r))"};
	cout << regex_replace(S, reg, "a") << endl;
	return 0;
}
