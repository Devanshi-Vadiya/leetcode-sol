// Last updated: 4/24/2026, 5:06:16 PM
class Solution {
public:
    string reverseVowels(string s) {
        string v = "aeiouAEIOU";
        int i = 0, j = s.size() - 1;
        while (i < j) {
            if (v.find(s[i]) == -1) 
            i++;
            else if (v.find(s[j]) == -1)
             j--;
            else swap(s[i++], s[j--]);
        }
        return s;
    }
};