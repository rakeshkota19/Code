//
// Created by raki on 15/09/22.
//

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        vector<int> ans;

        int len = nums.size();
        map<int, bool> m;

        for(int i = 1 ; i <= len ;i++)
            m[i] = true;

        for (int i = 0 ; i < len ; i++) {
            if (m.find(nums[i]) != m.end() && m[nums[i]])
                m[nums[i]] = false;

        }

        for(int i = 1 ; i <= len ; i++) {
            if(m[i])
                ans.push_back(i);
        }

        return ans;
    }
};
