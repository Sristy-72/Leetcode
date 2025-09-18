class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        int m= nums1.size();
        int n= nums2.size();
        vector<int>finalarr;
            int i=0;
            int j=0;
        while(i<m && j<n){
           
            if(nums1[i]<nums2[j]){
                finalarr.push_back(nums1[i]);
                i++;
            }
            else{
                finalarr.push_back(nums2[j]);
                j++;
            }
        }
    while(i<m){
        finalarr.push_back(nums1[i]);
        i++;
    }
    while(j<n){
        finalarr.push_back(nums2[j]);
        j++;
    }
      int total=m+n;
      if(total%2==0) {
        return (finalarr[total/2]+finalarr[total/2-1])/2.0;
      }
      else{
        return finalarr[total/2];
      }
          }
};