class Solution {
public:
    bool checkSubarraySum(vector<int>& nums, int k) {
     int n = nums.size();

    int sum = 0;
    int rem = 0;
    unordered_map<int,int> mp;
    mp[0] = -1;
    for(int i=0;i<n;i++){
        sum += nums[i];
        if(k!=0){
            rem = sum%k;
        }
        if(mp.find(rem) != mp.end()){
           if(i-mp[rem] > 1)
            return true;
        }else{
            mp[rem] = i;
        }
    }
    return false;   
    }
};