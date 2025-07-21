class Solution {
public:
    string makeFancyString(string s) {
        int n= s.size();
       string ans;
       for(int i=0;i<n;i++){
        int len= ans.size();
        if(len>= 2 && ans[len-1]== s[i] && ans[len-2]==s[i]){
            continue;
        }
        ans+=s[i];
       }
       return ans;
    }
};