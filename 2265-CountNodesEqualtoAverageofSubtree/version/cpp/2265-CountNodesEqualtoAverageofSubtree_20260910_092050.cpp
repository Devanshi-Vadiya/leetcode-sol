// Last updated: 9/10/2026, 9:20:50 AM
1/**
2 * Definition for a binary tree node.
3 * struct TreeNode {
4 *     int val;
5 *     TreeNode *left;
6 *     TreeNode *right;
7 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
8 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
9 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
10 * };
11 */
12class Solution {
13    int ans = 0;
14    pair<int,int> dfs(TreeNode* node) {
15        if (!node) return {0, 0};
16        auto [ls, lc] = dfs(node->left);
17        auto [rs, rc] = dfs(node->right);
18        int sum = ls + rs + node->val;
19        int cnt = lc + rc + 1;
20        if (sum / cnt == node->val) ans++;
21        return {sum, cnt};
22    }
23public:
24    int averageOfSubtree(TreeNode* root) {
25        dfs(root);
26        return ans;
27    }
28};