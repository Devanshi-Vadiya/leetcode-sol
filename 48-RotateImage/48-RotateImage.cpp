// Last updated: 8/25/2026, 2:28:05 PM
1class Solution {
2public:
3    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
4        stack<int> s1, s2;
5
6        while (l1) {
7            s1.push(l1->val);
8            l1 = l1->next;
9        }
10
11        while (l2) {
12            s2.push(l2->val);
13            l2 = l2->next;
14        }
15
16        int carry = 0;
17        ListNode* head = nullptr;
18
19        while (!s1.empty() || !s2.empty() || carry) {
20            int sum = carry;
21
22            if (!s1.empty()) {
23                sum += s1.top();
24                s1.pop();
25            }
26
27            if (!s2.empty()) {
28                sum += s2.top();
29                s2.pop();
30            }
31
32            carry = sum / 10;
33
34            ListNode* node = new ListNode(sum % 10);
35            node->next = head;
36            head = node;
37        }
38
39        return head;
40    }
41};