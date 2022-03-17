#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N;
	cin >> N;
	vector<int> vote(N, 0);
	int a;
	for (int i = 0; i < N; i++)
	{
		cin >> a;
		vote[a]++;
	}
	vector<int> student(N);
	for (int i = 0; i < N; i++)
		student[i] = i;

	auto cmp = [&](int x, int y) -> bool
	{
		return vote[x] > vote[y];
	};
	stable_sort(student.begin(), student.end(), cmp);
	for (int i : student)
		cout << i << " " << vote[i] << endl;
	return 0;
}
