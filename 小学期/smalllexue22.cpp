/*
 * @Author: vJanGo
 * @Date: 2023-09-05 09:40:55
 * @FilePath: \languageCworks\smalllexue22.cpp
 * @Description: come from vJanGo
 * 
 */
#include<cstdio>
#include<cstring>
#include<queue>
using namespace std;
typedef long long ll;
const int dir[2][4] = { {1,0,0,-1},
						{0,1,-1,0} };
char maze[101][101];
bool vis[101][101][51];
struct point {
	int x;
	int y;
	int time;
};
struct node
{
    ll x;
    ll y;
    bool f=false;
    ll step;
}cy,bg,ed,now,net,start;
vector<node>g[300100];
queue<node>tree;
int main(void)
{
	int T;
	scanf("%d", &T);
	while (T--)
	{
		point start, now, next, end;
		int n, m, k;
		int ans = -1;
		queue <point> q;
		memset(vis, false, sizeof(vis));
		scanf("%d %d %d\n", &n, &m, &k);
		for (int i = 1; i <= n; i++)
		{
			for (int j = 1; j <= m; j++)
			{
				maze[i][j] = getchar();
				if (maze[i][j] == 'S')
				{
					start.x = i;
					start.y = j;
					start.time = 0;
				}
				if (maze[i][j] == 'E')
				{
					end.x = i;
					end.y = j;
				}
			}
			getchar();
		}
		q.push(start);
		vis[start.x][start.y][start.time % k] = true;
		while (!q.empty())
		{
			now = q.front();
			q.pop();
			if (now.x == end.x && now.y == end.y)
			{
				ans = now.time;
				break;
			}
			for (int i = 0; i < 4; i++)
			{
				next.x = now.x + dir[0][i];
				next.y = now.y + dir[1][i];
				next.time = now.time + 1;
				if (next.x<1 || next.x>n || next.y > m || next.y < 1
					|| maze[next.x][next.y] == '#'
					|| vis[next.x][next.y][next.time % k]
					|| (maze[next.x][next.y] == '*' && next.time % k != 0))
				{
					continue;
				}
				q.push(next);
				vis[next.x][next.y][next.time % k] = true;
			}
		}
		printf("%d\n", ans);
	}
	return 0;
}