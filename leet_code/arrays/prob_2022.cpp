//
// Created by raki on 15/09/22.
//

class Solution {
public:
    vector<vector<int>> construct2DArray(vector<int>& arr, int m, int n) {
        vector<vector<int>> ans;

        int len = arr.size();

        if (len != m * n)
            return ans;

        int count = 0;
        vector<int> current;

        for(int i = 0 ; i < arr.size() ; i++) {

            current.push_back(arr[i]);
            count++;

            if (count == n-1) {
                ans.push_back(current);
                current.clear();
                m--;
                count = 0;
            }
        }

        return ans;
    }
};