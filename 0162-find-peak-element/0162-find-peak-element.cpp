class Solution {
public:
    int findPeakElement(vector<int>& arr) {
     int n=arr.size();
          int s=1, e= n-2;
         // Edge cases:
    if (n == 1) return 0;
    if (arr[0] > arr[1]) return 0;
    if (arr[n - 1] > arr[n - 2]) return n - 1;

        while(s<=e){
            //1 6 3  2 1 -> if we take this condition then it will try to comapare 1 with less than
            // 1 which is not present in the array so it will give error so we will take low as  //   and high as n-2
            int mid=(e+s)/2;
            if(arr[mid]>arr[mid-1] && arr[mid]>arr[mid+1]){// peak element
                return mid; // if we find that mid is the largest the we will retun the mid directly
            }
            else if(arr[mid]>arr[mid-1]){
                s=mid+1;// we will go to right side
            } else {
                e = mid - 1; // else we will go to left side
            }
        }
        return -1;
    }
};