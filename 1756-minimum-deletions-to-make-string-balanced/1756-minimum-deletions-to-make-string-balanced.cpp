class Solution {
public:
    int minimumDeletions(string s) {
        int cnt_a = 0, cnt_b = 0;
         int deletions = 0;
        for(int i = 0; i<s.length();i++){
            if(s[i] == 'a' && cnt_b == 0){
                cnt_a++;
            }
            else if(s[i] == 'a' && cnt_b > 0){
                cnt_b--;
                deletions++;
            }
            else{
                cnt_b++;
            }
        }
        return deletions;  
    }
};