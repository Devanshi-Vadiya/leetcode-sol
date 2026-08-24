// Last updated: 8/24/2026, 2:18:47 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode(int x) : val(x), next(NULL) {}
7 * };
8 */
9class Solution {
10public:
11    ListNode *detectCycle(ListNode *head) {
12        ListNode *slow = head,*fast = head;
13
14        while(fast!= nullptr && fast->next!=nullptr){
15            fast=fast->next->next;
16            slow = slow->next;
17
18            if(slow == fast){
19                while(head!=slow){
20                    head = head->next;
21                    slow= slow->next;
22                }
23                return slow;
24            }
25
26        }
27        return nullptr;
28        
29    }
30};