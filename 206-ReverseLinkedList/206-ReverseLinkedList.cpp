// Last updated: 8/3/2026, 1:56:15 PM
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
11
12class Solution {
13public:
14    ListNode* removeNthFromEnd(ListNode* head, int n) {
15        ListNode dummy(0);
16        dummy.next = head;
17
18        ListNode* fast = &dummy;
19        ListNode* slow = &dummy;
20
21        // Move fast n+1 steps ahead
22        for (int i = 0; i <= n; i++) {
23            fast = fast->next;
24        }
25
26        // Move both pointers
27        while (fast != nullptr) {
28            fast = fast->next;
29            slow = slow->next;
30        }
31
32        // Delete the nth node from end
33        slow->next = slow->next->next;
34
35        return dummy.next;
36    }
37};