class Solution {
public:
    long long minimumSteps(string s) {
        int n= s.length();
        long long SwapsReq=0;
        int blackballs=0;
       for(int i=n-1;i>=0;i--){
        if(s[i] == '1'){
           SwapsReq= SwapsReq+blackballs; 
        }
        else  {
             blackballs++;  
             
        }
       } 
       return SwapsReq;
    }
};