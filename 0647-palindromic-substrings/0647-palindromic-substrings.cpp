class Solution {
public:
    int countSubstrings(string s) {
        int n = s.size();
        int count = 0;
        
        for(int i = 0; i < n; i++){
            string temp = "";
            for(int j = i; j < n; j++){
                temp += s[j];
                if(isPalindrome(temp)) count++;
            }
        }
        
        return count;
    }
    
    bool isPalindrome(string s){
        int l = 0, r = s.size()-1;
        while(l < r){
            if(s[l] != s[r]) return false;
            l++, r--;
        }
        return true;
    }
};
