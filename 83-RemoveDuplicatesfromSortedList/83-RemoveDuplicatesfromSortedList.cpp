// Last updated: 8/7/2026, 2:30:33 PM
1class Solution {
2public:
3    ListNode* reverseBetween(ListNode* head, int left, int right) {
4
5        if(head == nullptr || left == right)
6            return head;
7
8        ListNode dummy(0);
9        dummy.next = head;
10
11        ListNode *prev = &dummy;
12
13        // Move prev to the node just before 'left'
14        for(int i = 1; i < left; i++)
15        {
16            prev = prev->next;
17        }
18
19        ListNode *curr = prev->next;
20
21        // Reverse right-left nodes
22        for(int i = 0; i < right - left; i++)
23        {
24            ListNode *next = curr->next;
25
26            curr->next = next->next;
27
28            next->next = prev->next;
29
30            prev->next = next;
31        }
32
33        return dummy.next;
34    }
35};