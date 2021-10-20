class Solution {
public:
    int countBinarySubstrings(string s) {
        vector<int>count{0,0};
        int ans = 0;
        
        if(s.size() == 0)
            return 0;
        
        int val = s[0] - '0';
        count[val]++;
        
        for(int i = 1 ; i <  s.size() ; i++) {
            int val = s[i] - '0';
            
            if (s[i] == s[i-1]) {
                count[val]++;
            } else {
                ans += min(count[0], count[1]);
                count[val] = 1;
            }
        }
        
        ans += min(count[0], count[1]);
        
        return ans;
    }
};