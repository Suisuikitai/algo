#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	string Y, M;
	cin >> N >> Y >> M;
	string S;
	smatch m;
	string regs;
	regex reg{R"(([^_]+_|\d{2}\.pdf$))"};
	cout << N << Y << M << endl;
	//年月に当たる部分のみを抜き出して比較し、
	//一致している場合は領収書名を抜き出す
	for (int i = 0; i < N; i++)
	{
		cin >> S;
		string yearmonth = regex_replace(S, reg, "");
		if (yearmonth == Y + M)
		{
			cout << "Yes" << endl;
		}
		// regex reg{R"(_\d{8}\.pdf$)"};
		// string tmp = regex_replace(S, reg, "");
		// cout << tmp << endl;
	}
	return 0;
}
