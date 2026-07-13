class Solution {
public:
    bool isAnagram(string s, string t) {
        int m= s.size();
        int n= t.size();
        if(m!=n) return false;
        map<char, int>mp1;
        map<char, int>mp2;
        for(auto it:s){
            mp1[it]++;
        }
        for(auto it:t){
            mp2[it]++;
        }
        for(auto it :mp1){
            if(mp1[it.first]!=mp2[it.first]) return false;
        }
        return true;
    }
};