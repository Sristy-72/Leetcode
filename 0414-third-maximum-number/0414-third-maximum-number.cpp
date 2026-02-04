class Solution {
public:
    int thirdMax(vector<int>& nums) {
        int n= nums.size();
        long long largest=nums[0];
        long long second_largest= LLONG_MIN;
        
        long long third_largest= LLONG_MIN;
       
        for(int i=0;i<n;i++){
            if(nums[i]==largest || nums[i]==second_largest || nums[i]==third_largest) continue;
            if(nums[i]>largest){
                third_largest= second_largest;
                second_largest= largest;
                largest= nums[i]; 
            }
            else if(nums[i]>second_largest){
                third_largest= second_largest;
                second_largest = nums[i];

            }
           else if(nums[i]>third_largest){
            third_largest= nums[i];
           }
        }
         return (third_largest==LLONG_MIN)? largest :third_largest;
       
    }
};