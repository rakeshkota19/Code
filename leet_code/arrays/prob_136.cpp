//
// Created by raki on 15/09/22.
//

class Solution {
public:
    int singleNumber(vector<int>& arr) {
        int len = arr.size(), ans = 0;

        for (int i = 0 ; i < len ; i++)
            ans ^= arr[i];

        return ans;
    }
};