class Solution {
public:
    int searchInsert(vector<int>& arr, int target) {
      int start=0, end=arr.size()-1, ans=arr.size() ,mid;
      while(start<=end){
        mid=start+ (end-start)/2;
        if(arr[mid]==target){
            ans=mid;
            break;
        }
        else if(arr[mid]<target){
            start =mid+1;

        }
        else {
            ans=mid;
            end=mid-1;
        }
      }  
      return ans;
    }
};