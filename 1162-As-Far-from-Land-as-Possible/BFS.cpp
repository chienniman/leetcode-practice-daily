#include <vector>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

class Solution {
public:
    int maxDistance(vector<vector<int>>& grid) {
        int n = grid.size();
        queue<pair<int, int>> q;
        for (int i = 0; i < n; ++i) {
            for (int j = 0; j < n; ++j) {
                if (grid[i][j] == 1) {
                    q.push({i, j});
                }
            }
        }
        int dx[4] = {-1, 1, 0, 0};
        int dy[4] = {0, 0, -1, 1};
        int dist = -1;
        while (!q.empty()) {
            int x = q.front().first;
            int y = q.front().second;
            q.pop();
            for (int i = 0; i < 4; ++i) {
                int a = x + dx[i];
                int b = y + dy[i];
                if (a >= 0 && a < n && b >= 0 && b < n && grid[a][b] == 0) {
                    grid[a][b] = grid[x][y] + 1;
                    q.push({a, b});
                    dist = max(dist, grid[a][b] - 1);
                }
            }
        }
        return dist;
    }
};