// Last updated: 8/12/2026, 1:17:56 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    int getDecimalValue(ListNode* head) {
14
15        int ans = 0;
16
17        while (head != NULL) {
18            ans = ans * 2 + head->val;
19            head = head->next;
20        }
21
22        return ans;
23    }
24};