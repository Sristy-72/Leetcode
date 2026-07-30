class Solution {
public:
    bool searchMatrix(vector<vector<int>>& mt, int target) {
        int m= mt.size();
        int n= mt[0].size();
        int strow=0;
        int endrow=m-1;
        int stcol=0;
        int endcol= n-1;
        while(strow<=endrow){
            int midrow= strow+ (endrow-strow)/2;
              if(mt[midrow][0]<=target && mt[midrow][endcol]>=target){
                while(stcol<=endcol){
                    int midcol= stcol+ (endcol-stcol)/2;
                    if(mt[midrow][midcol]==target) return true;
                    else if(mt[midrow][midcol]<target) stcol= midcol+1;
                    else endcol= midcol-1;
                }
                   
                return false;  
            }
            else if(mt[midrow][0]>target) endrow= midrow-1;
            else  strow=midrow+1;  
        }
        return false;
    }
};