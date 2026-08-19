// Last updated: 8/19/2026, 2:15:59 PM
1class Solution {
2public:
3    ListNode* removeZeroSumSublists(ListNode* head) {
4        ListNode* dummy = new ListNode(0);
5        dummy->next = head;
6
7        unordered_map<int, ListNode*> mp;
8
9        int sum = 0;
10        ListNode* curr = dummy;
11
12        while (curr != nullptr) {
13            sum += curr->val;
14            mp[sum] = curr;
15            curr = curr->next;
16        }
17
18        sum = 0;
19        curr = dummy;
20
21        while (curr != nullptr) {
22            sum += curr->val;
23
24            curr->next = mp[sum]->next;
25
26            curr = curr->next;
27        }
28
29        return dummy->next;
30    }
31};