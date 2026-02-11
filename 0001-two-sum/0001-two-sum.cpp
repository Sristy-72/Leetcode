class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
    vector<int>ans;
    int n= nums.size();
    vector<pair<int,int>>v;
    for(int i=0;i<n;i++){
       v.push_back({nums[i],i});
    }
    sort(v.begin(), v.end());
    int j=n-1;
    int i=0;
    while(i<j){
        if(v[i].first+ v[j].first== target){
           return {v[i].second,v[j].second};
        }
        else if(v[i].first + v[j].first >target){
            j--;
        }
        else{
            i++;
        }
    }
    return {};
    }
};