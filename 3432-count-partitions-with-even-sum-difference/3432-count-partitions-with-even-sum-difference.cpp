class Solution {
public:
    int countPartitions(vector<int>& nums) {
        int n= nums.size();
        int sum=0;
        for(int i=0;i<n;i++){
          sum= sum+nums[i];
        }
        int first=0;
        int second=sum;
        int cnt=0;
        for(int i=0;i<n-1;i++){
          first=first+nums[i];
          second= sum-first;
          if((first-second)%2==0) cnt++;
        }
        return cnt;
    }
};