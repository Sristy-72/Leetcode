class Solution {
public:
    char findTheDifference(string s, string t) {
    unordered_map<char,int>mp;
    for(char &ch:s){
        mp[ch]++;
    }    
    for(char &ch:t){
        // if(mp.find()==mp.end())
        // return ch
        mp[ch]--;
        if(mp[ch]<0)
        return ch;
    }
    return 'x';
    }
};