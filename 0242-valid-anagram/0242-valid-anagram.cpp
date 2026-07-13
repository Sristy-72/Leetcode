class Solution {
public:
    bool isAnagram(string s, string t) {
        int m= s.size();
        int n= t.size();
        if(m!=n) return false;
       vector<int>arr(26);
       for(int i=0;i<n;i++){
        arr[s[i]-'a']++;
        arr[t[i]-'a']--;
       }
       for(int i=0;i<26;i++){
       if(arr[i]!=0) return false;
       }
       return true;
    }
};