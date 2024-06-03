class Solution {
public:
    int isPalindrome(int x) {
        // cin>>x;
    long long ans=0;
    long long dup=x;
    while(x>0){
        int r=x%10;
        ans=(ans*10)+r;
        x=x/10;
    }
    if(dup==ans)
    return true;
    else 
    return false;
    }
};