class Solution {
public:
    string replaceWords(vector<string>& dictionary, string sentence) {
    unordered_set<string> myset;
        for(auto it : dictionary) myset.insert(it);
        
        string ans = "";
        istringstream ss(sentence);
        string word;
        while(ss >> word) {
            bool flag = true;
            for(int len = 1; len < word.size(); len++) {
                if(myset.find(word.substr(0, len)) != myset.end()) { 
                    ans += word.substr(0, len);
                    flag = false;
                    break;
                }
            }
            if(flag) ans += word;
            ans += " ";
        }
        
        ans.pop_back();
        return ans;    
    }
};