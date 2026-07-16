class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int i=0;
        int j= n-1;
        int stored_water=0;
        int current_water=0;
        while(i<j){
           current_water= (j-i)*min(height[i],height[j]);
           stored_water= max(stored_water, current_water);
           if(height[i]>height[j]) j--;
           else i++;
        }
        return stored_water;
    }
};