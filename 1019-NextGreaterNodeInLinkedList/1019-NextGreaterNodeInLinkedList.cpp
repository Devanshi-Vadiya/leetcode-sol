// Last updated: 8/13/2026, 1:31:44 PM
1/**
2 * Definition for singly-linked list.
3 * struct ListNode {
4 *     int val;
5 *     ListNode *next;
6 *     ListNode() : val(0), next(nullptr) {}
7 *     ListNode(int x) : val(x), next(nullptr) {}
8 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
9 * };
10 */
11class Solution {
12public:
13    vector<int> nextLargerNodes(ListNode* head) {
14        vector<int> ans;  //empty vector jo store kaega answer haar ek noode ka 
15        ListNode* curr = head; //create karega pointer curr, jo head se start hoke haar node meh jayega
16
17        while (curr != nullptr) { //Loop run karega till curr end of nullptr tak nhi pahuch jata
18            ListNode* temp = curr->next; //another pointer temp jo start hoga next node after curr
19            int check = 0; //as the grater wla ko store karne ke liye
20
21            while (temp != nullptr) {
22                if (temp->val > curr->val) { //compares karega value of temp with curr
23                    check = temp->val; //agar large value milega to stor ein check
24                    break; //stop kar dega search bcz hame chahiye 1st greater node aur largest nhi
25                }
26                temp = temp->next; //agar nhi mila toh
27            }
28
29            ans.push_back(check);
30            curr = curr->next; 
31        }
32        return ans; 
33    }
34};