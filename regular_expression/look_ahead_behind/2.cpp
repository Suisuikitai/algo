#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
	string S;
	getline(cin, S);
	regex reg{R"(asian(?=( [a-z]+){5,}))"};
	cout << regex_replace(S, reg, "global") << endl;
	return 0;
}
