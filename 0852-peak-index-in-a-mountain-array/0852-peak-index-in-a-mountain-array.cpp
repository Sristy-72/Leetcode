class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int n=arr.size();
        int s=0;
        int end= n-1;
        int mid= s + (end-s)/2;
        while(s<=end){
            if(arr[mid]>arr[mid+1] && arr[mid]>arr[mid-1]) return mid;
            else if(arr[mid]>arr[mid+1] && arr[mid]<arr[mid-1]){
                end= mid-1;
            }
            else s=mid+1;
            mid= (s+end)/2;
        }
        return -1;
    }
};