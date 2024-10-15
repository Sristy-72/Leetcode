class Solution {
public:
    long long minimumSteps(string s) {
        int n= s.length();
        long long SwapsReq=0;
        int blackballs=0;
       for(int i=0;i<n;i++){
        if(s[i] == '1'){
            blackballs++;  
        }
        else  {
             SwapsReq= SwapsReq+blackballs; 
        }
       } 
       return SwapsReq;
    }
};