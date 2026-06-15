class Solution {
public:
    bool isPalindrome(string s) {
      int n= s.length();
      string ans;
      for(int i=0;i<n;i++){
        if('A' <= s[i] && s[i]<='Z' || 'a' <= s[i] && s[i]<='z' || '0' <= s[i] && s[i]<='9' ) {
            ans.push_back(tolower(s[i]));
        } 
      }
      string ans2= ans;
      reverse(ans2.begin(), ans2.end());
      return ans2==ans;
    }
};