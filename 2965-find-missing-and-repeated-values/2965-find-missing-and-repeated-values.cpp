class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        int n= grid.size();
        unordered_map<int,int>mp;
        int sum=0;
        int sum1=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                mp[grid[i][j]]++;
                if(mp[grid[i][j]]>1) {
                    ans.push_back(grid[i][j]);
                }
                sum= sum+ grid[i][j];
                
            }
        }
        for(int i=1;i<=(n*n);i++){
            sum1=sum1+i;
        }
        int missing= sum1-sum+ans[0];
        ans.push_back(missing);
        
        return ans;
    }
};