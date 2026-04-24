// Last updated: 4/24/2026, 5:06:38 PM
class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> mp;

        for (string s : strs) {
            string temp = s;
            sort(temp.begin(), temp.end());
            mp[temp].push_back(s);
        }
        //for(string word: nums){
        //     string=word;
        //     sort(temp.begin(),temp.end());
        //      anagram[temp].push_back(word);
        // }

        vector<vector<string>> ans;

        for (auto & x : mp) {
            ans.push_back(x.second);
        }
        //for(auto )
        return ans;
    }
};
