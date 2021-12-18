#include <bits/stdc++.h>
#include <regex>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	string Y, M;
	cin >> N >> Y >> M;
	string S;
	string regs;
	//年月に当たる部分のみを抜き出して比較し、
	//一致している場合は領収書名を抜き出す
	for (int i = 0; i < N; i++)
	{
		cin >> S;
		if (regex_replace(S, regex{R"(([^_]+_|\d{2}\.pdf$))"}, "") == Y + M)
		{
			string s = regex_replace(S, regex{R"(^[^_]+_)"}, "");
			s = regex_replace(s, regex{R"(_\d{8}\.pdf$)"}, "");
			cout << s << endl;
		}
	}
	return 0;
}
