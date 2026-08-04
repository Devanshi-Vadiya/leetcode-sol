// Last updated: 8/4/2026, 2:04:43 PM
1class Solution {
2public:
3    void deleteNode(ListNode* node) {
4        node->val = node->next->val;
5        node->next = node->next->next;
6    }
7};