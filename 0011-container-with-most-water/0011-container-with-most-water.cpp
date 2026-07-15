class Solution {
public:
    int maxArea(vector<int>& height) {
        int n= height.size();
        int stored_water=0;
        int currentwater=0;
         int j=n-1;
          int i=0;
        while(i<j){
          currentwater= (j-i)*min(height[i],height[j]);
         if(height[i]>height[j]) j--;
         else i++;
          stored_water= max(stored_water, currentwater);
         
            
        }
        return stored_water;
    }
};