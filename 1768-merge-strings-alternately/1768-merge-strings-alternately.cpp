class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        int n= word1.length();
        int m= word2.length();
        int len= max(m,n);
        string ans="";
        for(int i=0 ;i<len;i++){
            if(i<n){
              ans= ans+ word1[i];
            }
            if(i<m){
                ans= ans+ word2[i];
            }
          
        }
        return ans;
    }
};