class Solution {
public:
    int subarraySum(vector<int>& arr, int k) {
        int n=arr.size();
        int cnt=0;
    //     for(int i=0;i<n;i++){
    //         sum= sum+nums[i];
    //         if(sum==k){
    //             cnt++;
    //         }
        
    //     int newsum= sum;
    //     newsum=newsum- nums[i]+ nums[i-k];
    //     if(newsum==k){
    //         cnt=cnt+1;
    //     }
    //     }
    // return cnt;

    for(int i=0;i<n;i++){
         int sum=0;
        for(int j=i;j<n;j++){
            sum= sum+arr[j];
            if(sum==k) {
                cnt++;
            }
           
        }
    }
    return cnt;
    }
};