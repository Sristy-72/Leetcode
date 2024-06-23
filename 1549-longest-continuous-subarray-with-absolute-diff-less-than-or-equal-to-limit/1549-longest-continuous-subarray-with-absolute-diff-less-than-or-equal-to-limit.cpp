class Solution {
public:
    int longestSubarray(vector<int>& nums, int limit) {
      int n = nums.size();
        int ans = 0;
        int slow = 0;
        
        deque<int> maxQ;
        deque<int> minQ;
        
        for(int fast = 0; fast < n; fast++){
            while(!maxQ.empty() && maxQ.back() < nums[fast]) maxQ.pop_back();
            while(!minQ.empty() && minQ.back() > nums[fast]) minQ.pop_back();
            maxQ.push_back(nums[fast]);
            minQ.push_back(nums[fast]);
            while(maxQ.front() - minQ.front() > limit){
                // cout << slow << ", " << fast << endl;
                if(maxQ.front() == nums[slow])maxQ.pop_front();
                if(minQ.front() == nums[slow])minQ.pop_front();
                slow++;
            }
            ans = max(ans, fast - slow + 1);
        }
        cout << endl;
        
        return ans;   
    }
};