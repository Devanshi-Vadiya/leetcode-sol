// Last updated: 4/24/2026, 5:06:23 PM
class Solution {
public:
    bool isAnagram(string s, string t) {
        sort(begin(s),end(s));
        sort(begin(t),end(t));

        return s == t;

        

    }
};