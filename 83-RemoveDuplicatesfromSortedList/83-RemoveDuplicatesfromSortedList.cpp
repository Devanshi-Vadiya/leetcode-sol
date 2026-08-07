// Last updated: 8/7/2026, 2:05:02 PM
1class Solution {
2public:
3    ListNode* reverseList(ListNode* head) {
4
5        ListNode *prev = nullptr;
6        ListNode *curr = head;
7        ListNode *next = nullptr;
8
9        while(curr != nullptr)
10        {
11            next = curr->next;
12            curr->next = prev;
13            prev = curr;
14            curr = next;
15        }
16
17        return prev;
18    }
19};