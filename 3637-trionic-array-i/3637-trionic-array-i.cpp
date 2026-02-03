class Solution {
public:
    bool isTrionic(vector<int>& nums) {
        int n = nums.size();
        if(n < 3) return false;

        int p = -1, q = -1;

        // 1) strictly increasing part
        for(int i = 0; i < n-1; i++) {
            if(nums[i+1] > nums[i]) continue;
            p = i;
            break;
        }
        if(p == -1 || p<1) return false; // never stopped

        // 2) strictly decreasing part
        for(int i = p; i < n-1; i++) {
            if(nums[i] > nums[i+1]) continue;
            q = i;
            break;
        }
        if(q == -1 || q<1) return false;

        // 3) strictly increasing again
        for(int i = q; i < n-1; i++) {
            if(nums[i] < nums[i+1]) continue;
            return false;
        }
      if(n - 1 - q < 1) return false; 
        return true;
    }
};
