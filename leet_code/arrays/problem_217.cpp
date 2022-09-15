//
// Created by raki on 15/09/22.
//

class Solution {
public:
    bool containsDuplicate(vector<int>& nums) {
        int len = nums.size();

        //map<int, bool> m;
        set<int>s;

        for(int i = 0 ; i < len ; i++) {
            if (s.find(nums[i]) != s.end())
                return true;

            //m[nums[i]] = true;
            s.insert(nums[i]);
        }

        return false;
    }
};