// Last updated: 8/6/2026, 5:21:09 PM
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
13    ListNode* swapPairs(ListNode* head) {
14        ListNode dummy(0);
15        dummy.next = head;
16
17        ListNode* prev = &dummy;
18
19        while (prev->next && prev->next->next) {
20            ListNode* first = prev->next;
21            ListNode* second = first->next;
22
23            first->next = second->next;
24            second->next = first;
25            prev->next = second;
26
27            prev = first;
28        }
29
30        return dummy.next;
31    }
32};