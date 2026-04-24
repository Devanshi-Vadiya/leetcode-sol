// Last updated: 4/24/2026, 5:06:44 PM
class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string prefix = strs[0];

        for (int i = 1; i < strs.size(); i++) {
            // Keep removing last character until prefix matches
            while (strs[i].find(prefix) != 0) {
                prefix.pop_back();
                
                if (prefix.empty())
                    return "";
            }
        }

        return prefix;
    }
};