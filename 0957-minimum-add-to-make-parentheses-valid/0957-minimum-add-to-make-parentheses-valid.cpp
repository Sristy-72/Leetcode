class Solution {
public:
    int minAddToMakeValid(string s) {
     int cnt = 0;
        int open = 0;

        for(char &ch : s) {
            if(ch == '(') {
                cnt++;
            } else if(cnt > 0) {
                cnt--;
            } else {
                open++;
            }
        }

        return open + cnt;
    }
};