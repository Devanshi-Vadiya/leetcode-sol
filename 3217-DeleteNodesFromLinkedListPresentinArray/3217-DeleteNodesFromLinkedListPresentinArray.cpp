// Last updated: 8/11/2026, 1:21:13 PM
1class Solution {
2public:
3    ListNode* modifiedList(vector<int>& nums, ListNode* head) {
4
5        unordered_set<int> st;
6
7        for(int i = 0; i < nums.size(); i++)
8        {
9            st.insert(nums[i]);
10        }
11
12        while(head != nullptr && st.count(head->val))
13        {
14            head = head->next;
15        }
16
17        ListNode* temp = head;
18
19        while(temp != nullptr && temp->next != nullptr)
20        {
21            if(st.count(temp->next->val))
22            {
23                temp->next = temp->next->next;
24            }
25            else
26            {
27                temp = temp->next;
28            }
29        }
30
31        return head;
32    }
33};