// Last updated: 4/24/2026, 5:06:27 PM
class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        unordered_set<int> st;

        for (int value : nums) {
            if (st.count(value)) return true;
            st.insert(value);
        }

        return false;
    }
};