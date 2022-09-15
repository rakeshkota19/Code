//
// Created by raki on 15/09/22.
//

class Solution {
public:
    int missingNumber(vector<int>& arr) {
        int len = arr.size();
        int ans = len;

        for(int i = 0 ; i < len; i++) {
            ans ^= arr[i];
            ans ^= i;
        }

        return ans;

    }
};