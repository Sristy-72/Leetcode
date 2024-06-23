class Solution {
public:
    bool search(vector<int>& arr, int target) {
        int n=arr.size();
    int st=0;
    int end=n-1;    
    while(st<=end){
        int mid=(st+end)/2;
        if(arr[mid]==target)
        return true;
        if(arr[st]==arr[mid] && arr[mid]==arr[end]){
            st=st+1;
            end=end-1;
            continue;
        }
         if(arr[st]<=arr[mid]){//left side sorted
            if(target>=arr[st] && target<=arr[mid]){
            end=mid-1;
            }
            else{
            st=mid+1;
            }
        }
        else{
            if(target>=arr[mid] && target<=arr[end]){// right side sorted
                st=mid+1;
            }
            else{
            end=mid-1;
            }
        }
    }
    return false;
    }
};