class Solution {
public:
    int maxRotateFunction(vector<int>& nums) {
        int n= nums.size();
    //     vector<int>temp= nums;
    //     int maxi=INT_MIN;
    //     for(int i=0;i<n;i++){
    //         vector<int>arr(n);
    //        for(int j=0;j<n;j++){
    //           if(j==0) arr[0]=temp[n-1];
    //          else arr[j]= temp[j-1];

    //        }
    //        int fun=0;
    //        for(int k=0;k<n;k++){
    //           fun= fun+(k*arr[k]);
    //        }
    //        maxi= max(maxi,fun);
    //        temp= arr;
    //     }
    //  return maxi;

    int sum=0;
    int F=0;
    for(int i=0;i<n;i++){
        sum= sum+ nums[i];
        F=F+ nums[i]*i;
    }
    int maxi=F;
    for(int i=0;i<=n-1;i++){
       int F2= F+ sum-n*(nums[n-1-i]);
       maxi= max(maxi, F2);
       F= F2;
    }
    return maxi;
    } 
};