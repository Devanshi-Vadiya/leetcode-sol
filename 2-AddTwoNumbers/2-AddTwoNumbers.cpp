// Last updated: 8/11/2026, 4:28:20 PM
1class Solution {
2public:
3    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
4
5        ListNode* dummy = new ListNode(0);
6        ListNode* temp = dummy;
7
8        int carry = 0;
9
10        while (l1 != nullptr || l2 != nullptr || carry != 0) {
11
12            int sum = carry;
13
14            if (l1 != nullptr) {
15                sum += l1->val;
16                l1 = l1->next;
17            }
18
19            if (l2 != nullptr) {
20                sum += l2->val;
21                l2 = l2->next;
22            }
23
24            carry = sum / 10;
25            int digit = sum % 10;
26
27            temp->next = new ListNode(digit);
28            temp = temp->next;
29        }
30
31        return dummy->next;
32    }
33};