class Solution {
public:
    bool isAnagram(string s, string t) {
      unordered_map<char,int>mp1;
      unordered_map<char, int>mp2;
      int n= s.size();
      int m= t.size();
      if(n!=m) return false;
      for(char c:s){
        mp1[c]++;
      }
      for(char c:t){
        mp2[c]++;
      }
      return mp1==mp2;
    }
};