// Last updated: 4/24/2026, 5:06:29 PM
class Solution {
public:
    int majorityElement(vector<int>& nums) 
    {
        //frequency count of individual elemnts:
        unordered_map<int,int>mp;

        //iteration of given vector:
        for(int value : nums){
            mp[value]++; //key exist increment cureent value ; if doesnt exist . create it and increment to 1
        }

        int freq = nums.size()/2;
        //find that element > freq
        int val;
        for(auto& it : mp){
            if(it.second>freq)
                  {
                    val = it.first;
                    break;
                  }
        }
        return val;
    }
};