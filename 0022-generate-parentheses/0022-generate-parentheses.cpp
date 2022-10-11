class Solution {
public:
  
   void func(int size, vector<string> &ans, int left, int right, string s) {
     
     if (left + right > size || right > left)
       return;
     
     if (left + right == size) {
       if (left > right)
         return;
       
       ans.push_back(s);
       return;
     }
     
     
     func(size, ans, left+1, right, s + "(");
     func(size, ans, left, right+1, s + ")");
      return;
   }
  
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
      
        func(2*n, ans, 0, 0, "");
      
        return ans;
    }
};