// Last updated: 4/24/2026, 5:06:18 PM
class Solution {
public:
    void reverseString(vector<char>& s) {
        int left = 0, right = s.size() - 1;

        while (left < right) {
            swap(s[left], s[right]);
            left++;
            right--;
        }
    }
};