#include <iostream>
#include <vector>
#include <queue>
#include <utility>
#include <algorithm>

using namespace std;

int main()
{
    class Solution
    {
    public:
        int maxDistance(vector<vector<int>> &grid)
        {

        }
    };

    vector<vector<int>> grid1 = {{1, 0, 1}, {0, 0, 0}, {1, 0, 1}};
    vector<vector<int>> grid2={{1,0,0},{0,0,0},{0,0,0}};
    Solution solution;
    int test1 = solution.maxDistance(grid1);
    int test2 = solution.maxDistance(grid2);
    cout << "test1:" << test1 << endl;
    cout << "test2:" << test2 << endl;
    return 0;
}
