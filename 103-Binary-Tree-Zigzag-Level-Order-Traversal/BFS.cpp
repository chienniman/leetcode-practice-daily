#include <vector>
#include <deque>
#include <queue>

using namespace std;

struct TreeNode
{
    int val;
    TreeNode *left;
    TreeNode *right;
    TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
};

class Solution
{
public:
    vector<vector<int>> zigzagLevelOrder(TreeNode *root)
    {
        vector<vector<int>> res;
        if (root == nullptr)
        { 
            return res;
        }

        deque<TreeNode *> q; // 雙向佇列
        q.push_back(root);   
        bool flag = true;    // 初始方向變量为 true，左到右遍歷
        while (!q.empty())
        {                         
            int n = q.size();     // 當層節點數
            vector<int> curLevel; // 當層節點值
            for (int i = 0; i < n; i++)
            { 
                if (flag)
                {                               
                    TreeNode *node = q.front();    
                    q.pop_front();                
                    curLevel.push_back(node->val);
                    if (node->left)
                        q.push_back(node->left); 
                    if (node->right)
                        q.push_back(node->right);
                }
                else
                {                                 
                    TreeNode *node = q.back();    
                    q.pop_back();                  
                    curLevel.push_back(node->val); 
                    if (node->right)
                        q.push_front(node->right); 
                    if (node->left)
                        q.push_front(node->left); 
                }
            }
            res.push_back(curLevel);
            flag = !flag;            // 方向反轉
        }

        return res;
    }
};
