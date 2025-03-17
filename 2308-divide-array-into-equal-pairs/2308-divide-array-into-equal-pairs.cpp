class Solution {
public:
    bool divideArray(vector<int>& nums) {
        int n= nums.size();
        if(n%2!=0) return false;
        vector<bool>used(n,false);

       for(int i=0;i<n;i++){
        if(used[i])continue;
        bool foundpair= false;
        for(int j=i+1;j<n;j++){
            if( !used[j] && nums[i]==nums[j]){
            used[j]=true;
            foundpair=true;
            break;
            }
        }
        if(!foundpair) return false;
       } 
       return true;
    }
};
