#include <bits/stdc++.h>
using namespace std;

using Node = pair<int, int>;

vector<int> dxs = {1, 0, -1, 0};
vector<int> dys = {0, 1, 0, -1};

int main(int argc, char const *argv[])
{
	int H, W;
	int X0, Y0, X1, Y1;
	cin >> H >> W;
	cin >> X0 >> Y0 >> X1 >> Y1;
	vector<string> S(H);
	for (int i = 0; i < H; i++)
		cin >> S[i];

	//何手目にそのマスを訪れたかを表す二次元配列
	//-1は未探索を表す
	vector<vector<int>> dist(H, vector<int>(W, -1));

	queue<Node> que;

	dist[X0][Y0] = 0;
	que.push(Node(X0, Y0));

	while (!que.empty())
	{
		auto [x, y] = que.front();
		que.pop();

		for (int direction = 0; direction < 4; direction++)
		{
			int x2 = x + dxs[direction];
			int y2 = y + dys[direction];

			if (x2 < 0 || x2 >= H || y2 < 0 || y2 >= W || S[x2][y2] == 'B')
				continue;

			if (dist[x2][y2] != -1)
				continue;

			dist[x2][y2] = dist[x][y] + 1;
			que.push(Node(x2, y2));
		}
	}
	cout << dist[X1][Y1] << endl;
}