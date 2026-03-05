class Solution {
public:
    bool halvesAreAlike(string s) {

       int n= s.length();
       int cnt=0;
       int cnt2=0;
       for(int i=0;i<n/2;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            cnt=cnt+1;
        }

       } 
       for(int i=n/2;i<n;i++){
        if(s[i]=='a' || s[i]=='e' || s[i]=='i' || s[i]=='o' || s[i]=='u' || s[i]=='A'||s[i]=='E'||s[i]=='I'||s[i]=='O'||s[i]=='U'){
            cnt2=cnt2+1;
        }
       }
       return cnt==cnt2;
    }
};