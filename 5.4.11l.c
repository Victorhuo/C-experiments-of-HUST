#include <stdio.h>
int n, m;
int map[100][100];

int valid(int x, int y)
{
    if (x < 1 || x > n || y < 1 || y > m)
        return 0;
    return map[x][y] == 0;
}

void print_map()
{
    int i, j;
    for (i = 1; i <= n; ++i)
    {
        for (j = 1; j <= m; ++j)
        {
            if (map[i][j] == 0)
                printf("  ");
            else if (map[i][j] == 1)
                printf("= ");
            else if (map[i][j] == 8)
                printf("* ");
        }
        puts("");
    }
    puts("");
}

void dfs(int x, int y)
{
    int i;
    int dx[] = {0, 0, 1, -1};
    int dy[] = {1, -1, 0, 0};
    if (x == n && y == m)
    {
        map[x][y] = 8;
        print_map();
        map[x][y] = 0;
    }
    for (i = 0; i < 4; ++i)
    {
        int nx = x + dx[i], ny = y + dy[i];
        if (valid(nx, ny))
        {
            map[x][y] = 8;
            dfs(nx, ny);
            map[x][y] = 0;
        }
    }
}
int main()
{
    freopen("map.txt", "r", stdin);
    scanf("%d %d", &n, &m);
    int j, i;
    for (i = 1; i <= n; ++i)
        for (j = 1; j <= m; ++j)
            scanf("%d", &map[i][j]);
    dfs(1, 1);
}
