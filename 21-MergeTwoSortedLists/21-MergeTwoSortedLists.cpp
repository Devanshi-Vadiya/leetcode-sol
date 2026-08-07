// Last updated: 8/7/2026, 1:48:20 PM
1class Solution {
2public:
3    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
4
5        ListNode dummy(0);
6        ListNode* temp = &dummy;
7
8        while(list1 != nullptr && list2 != nullptr)
9        {
10            if(list1->val <= list2->val)
11            {
12                temp->next = list1;
13                list1 = list1->next;
14            }
15            else
16            {
17                temp->next = list2;
18                list2 = list2->next;
19            }
20
21            temp = temp->next;
22        }
23
24        if(list1 != nullptr)
25            temp->next = list1;
26        else
27            temp->next = list2;
28
29        return dummy.next;
30    }
31};