// Last updated: 9/7/2026, 1:42:32 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10
11 
12//  */
13// class Solution {
14// public:
15//     ListNode* middleNode(ListNode* head) {
16//         ListNode * fast = head ;
17//         ListNode * slow = head ;
18//        while(fast != nullptr && fast->next != nullptr){
19//             fast = fast->next->next ;
20//             slow = slow->next ;
21//         } 
22//         return slow ;
23//     }
24// };
25
26class Solution {
27public:
28    ListNode* middleNode(ListNode* head) {
29
30        int size = 0;
31
32        ListNode* i = head;
33
34        while (i != nullptr) {
35            size++;
36            i = i->next;
37        }
38
39        int mid = size / 2;
40
41        int count = 0;
42
43        i = head;
44
45        while (count < mid) {
46            i = i->next;
47            count++;
48        }
49
50        return i;
51    }
52};