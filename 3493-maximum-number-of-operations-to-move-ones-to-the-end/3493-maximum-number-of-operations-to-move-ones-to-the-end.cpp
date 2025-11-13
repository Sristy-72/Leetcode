class Solution {
public:
    int maxOperations(string s) {
    //     int n= s.length();
    //     int cnt=0;
    //     int end=n-1;
    //    for(int i=0;i<n-1;i++){
    //     if(s[i]=='1' && s[i+1]=='0'){
    //        if(s[end]=='0'){
    //         swap(s[i], s[end]);
    //        }
    //        else{
    //         end--;
    //        }
    //         cnt++;
    //     }
       
    //    }
    //     return cnt;
    int n = s.length();
        long long ans = 0;
        long long ones = 0;
        
        for (int i = 0; i < n; i++) {
            if (s[i] == '1') {
                ones++;
            } else { 
                if (i + 1 == n || s[i + 1] == '1') {
                    ans += ones;
                }
            }
        }
        
        return (int)ans;
    }
};