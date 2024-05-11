// O(logn)
//O(1)
class Solution {
public:
    int peakIndexInMountainArray(vector<int>& arr) {
        int s=0, e= arr.size()-1;
         int mid;
        while(s<=e){
            int mid= e+(s-e)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){// peak element
                return mid; // if we find that mid is the largest the we will retun the mid directly
            }
            else if(arr[mid]>arr[mid-1]){
                s=mid+1;// we will go to right side
            }
            else 
            e=mid-1; // else we will go to left side
        }
        return -1;
    }
};