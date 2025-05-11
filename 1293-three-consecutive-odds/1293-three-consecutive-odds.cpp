class Solution {
public:
    bool threeConsecutiveOdds(vector<int>& arr) {
          int cnt=0;
        for(auto it:arr){
            if(it&1){
                cnt++;
                if(cnt==3)return true;
            }
            
            else cnt=0;
        }
        return false;
    }
};