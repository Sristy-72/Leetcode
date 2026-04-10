class Solution {
public:
    vector<int> frequencySort(vector<int>& nums) {
        int n=nums.size();
        unordered_map<int,int>mp;
        for(auto it:nums){
            mp[it]++;
        }
        map<int , vector<int>>mpp;
        for(auto it:mp){
            mpp[it.second].push_back(it.first);

        }
        vector<int>v;
        for(auto it:mpp){
            vector<int>y=it.second;
            sort(y.begin(), y.end(),greater<int>());
            for(int i=0;i<y.size();i++){
                int x=it.first;
                while(x>0){
                    v.push_back(y[i]);
                    x--;
                }
            }
        }
        return v;
    }
};