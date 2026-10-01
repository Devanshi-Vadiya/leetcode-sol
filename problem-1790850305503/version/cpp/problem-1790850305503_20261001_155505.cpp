// Last updated: 10/1/2026, 3:55:05 PM
1class Solution {
2public:
3    ListNode* deleteDuplicates(ListNode* head) {
4
5        if (head == NULL || head->next == NULL)
6            return head;
7
8        ListNode* temp = new ListNode(0);
9        ListNode* dummy = temp;
10
11        ListNode* i = head;
12        ListNode* j = head;
13
14        while (i != NULL) {
15
16            j = i;
17
18            // Move j through all duplicate nodes
19            while (j->next != NULL && i->val == j->next->val) {
20                j = j->next;
21            }
22
23            // i == j means only one occurrence
24            if (i == j) {
25                dummy->next = i;
26                dummy = dummy->next;
27            }
28
29            // i != j means duplicate exists, so skip them
30
31            i = j->next;
32        }
33
34        dummy->next = NULL;
35
36        return temp->next;
37    }
38};