class Solution {
public:
    vector<int>maxSubsequence(vector<int>& nums, int k) {
        priority_queue<pair<int,int>>pq;
        for(int i=0;i<nums.size();i++){
            pq.push({nums[i],i});
        }
        vector<int>ans;
        map<int,int>m;
        while(!pq.empty() && k>0){
            // ans.push_back(pq.top());
            m[pq.top().second]=pq.top().first;
            pq.pop();
            k--;

        }
        for(auto it:m){
            cout<<it.first<<" "<<it.second<<endl;
            ans.push_back(it.second);
        }
        return ans;
    }
};