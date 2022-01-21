#include <bits/stdc++.h>
using namespace std;

int main(int argc, char const *argv[])
{
	int N = 0;
	cin >> N;
	vector<int> W(N);
	int size = 0;
	for (int &w : W)
	{
		cin >> w;
		size += w;
	}
	// dpで格納する値をどう使うか考える必要がある
	//部分問題として何を求めることができるか
	return 0;
}
