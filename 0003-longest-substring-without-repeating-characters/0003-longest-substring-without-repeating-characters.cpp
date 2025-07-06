class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n=s.length();
        int st=0;
        int maxlength= 0;
        unordered_map<char, int> mp;
        for(int i=0;i<n;i++){
            char ch= s[i];
            if(mp.find(s[i])!=mp.end() && mp[ch]>=st ){
            st=mp[ch]+1;
            }
            mp[ch]=i;
            maxlength= max(maxlength, i-st+1);
        }
        return maxlength;
    }
};