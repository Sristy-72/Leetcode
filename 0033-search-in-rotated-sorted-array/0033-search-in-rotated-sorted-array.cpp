class Solution {
public:
    int search(vector<int>& arr, int target) {
         int start=0, end=arr.size()-1;
         int mid;
         while(start<=end){
            mid= start+(end-start)/2;
            //found element
            if(arr[mid]==target){
                return mid;
            }
            //left side sorted
            else if(arr[mid]>=arr[0]){
                if(arr[start]<=target && target<=arr[mid])
                end=mid-1;
                else 
                start=mid+1;
            }
            // right side sorted
            else{
            if(arr[mid]<target && target<=arr[end])
              start=mid+1;  
            else
            end=mid-1;
            }
         }
         return -1;
    }
};