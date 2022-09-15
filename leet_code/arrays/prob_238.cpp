//
// Created by raki on 15/09/22.
//

#include<bits/stdc++.h>
using namespace std;

class Solution {
public:
    vector<int> productExceptSelf(vector<int>& arr) {
        int len = arr.size(), left = 1;

        vector<int>ans;
        vector<int>suffix(len+1);
        suffix[len] = 1;

        for (int i = len - 1  ; i >= 0 ; i--)
            suffix[i] = arr[i]*suffix[i+1];

        for (int i = 0 ; i <= len ; i++) {
            ans.push_back(left * suffix[i+1]);
            left *= arr[i];
        }

        return ans;
    }
};