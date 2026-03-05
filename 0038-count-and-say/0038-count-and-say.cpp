class Solution {
public:

    string countAndSay(int n) {
        if(n==1) return "1";
        string s=countAndSay(n-1);
        int cnt=1;
        string ans="";
        for(int i=1;i<s.length();i++){
            if(s[i]==s[i-1]){
               cnt=cnt+1;
            }
            else{
                ans=ans+to_string(cnt);
             ans=ans+s[i-1];
             
             cnt=1;
            }
        }
        ans += to_string(cnt);
        ans += s[s.length()-1];
        return ans;
    }
};