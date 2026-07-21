class Solution {
    void reverse(int[] nums, int s, int end){
        while(s<end){
            int temp= nums[s];
            nums[s]= nums[end];
            nums[end]= temp;
            s++;
            end--;

        }
    }
    public void rotate(int[] nums, int k) {
        int n= nums.length;
        k= k%n;
        int s= 0;
        int end=n-1;
        reverse(nums,0,n-1);
        reverse(nums, 0, k-1);
        reverse(nums, k, n-1);
    }
}