#include <bits/stdc++.h>
using namespace std;

struct Student
{
	string name;
	long long math;
	long long english;
};

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<Student> S(N);
	for (int i = 0; i < N; i++)
		cin >> S[i].name >> S[i].math >> S[i].english;
	auto cmp = [&](Student x, Student y) -> bool
	{
		if (x.math > y.math)
			return true;
		else if (x.math == y.math && x.english < y.english)
			return true;
		else
			return false;
	};
	stable_sort(S.begin(), S.end(), cmp);
	for (Student s : S)
		cout << s.name << " " << s.math << ' ' << s.english << endl;
	return 0;
}
