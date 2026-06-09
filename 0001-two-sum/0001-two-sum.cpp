class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int n= nums.size();
        vector<pair<int, int>>v;
         
        for(int i=0;i<n;i++){
            v.push_back({nums[i], i});
        }

        int j=n-1;
        int i=0;
        sort(v.begin(), v.end());
       while(i<j){
         if((v[i].first + v[j].first)==target) return {v[i].second,v[j].second};
         else if(((v[i].first + v[j].first))>target) j--;
         else i++;
       }
       return {-1,-1};
    }
};