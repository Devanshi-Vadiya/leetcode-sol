// Last updated: 8/4/2026, 1:26:35 PM
1class Solution {
2public:
3    ListNode* deleteDuplicates(ListNode* head) {
4
5        if(head == NULL)
6            return head;
7
8        ListNode* current = head;
9
10        while(current != NULL && current->next != NULL){
11
12            if(current->val == current->next->val){
13                current->next = current->next->next;
14            }
15            else{
16                current = current->next;
17            }
18        }
19
20        return head;
21    }
22};