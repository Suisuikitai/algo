#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
	string S;
	cin >> S;
	regex reg{R"(^[a-z]+(\-[a-z]+)*$)"};
	smatch m;
	if (regex_search(S, m, reg))
		cout << "Yes" << endl;
	else
		cout << "No" << endl;
	return 0;
}
