// Last updated: 10/1/2026, 2:45:03 PM
1class Solution {
2public:
3    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
4
5        if (list1 == NULL) return list2;
6        if (list2 == NULL) return list1;
7
8        ListNode* head;
9
10        if (list1->val <= list2->val) {
11            head = list1;
12            list1 = list1->next;
13        }
14        else {
15            head = list2;
16            list2 = list2->next;
17        }
18
19        ListNode* curr = head;
20        ListNode* temp;
21
22        while (list1 != NULL && list2 != NULL) {
23
24            if (list1->val <= list2->val) {
25                temp = list1;
26                list1 = list1->next;
27            }
28            else {
29                temp = list2;
30                list2 = list2->next;
31            }
32
33            curr->next = temp;
34            curr = curr->next;
35        }
36
37        if (list1 != NULL)
38            curr->next = list1;
39        else
40            curr->next = list2;
41
42        return head;
43    }
44};