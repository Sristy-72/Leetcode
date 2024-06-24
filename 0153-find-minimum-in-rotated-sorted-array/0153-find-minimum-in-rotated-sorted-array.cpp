class Solution {
public:
    int findMin(vector<int>& arr) {
        //  int start=0, end=nums.size()-1,
        //  ans=nums[0];
        //  while(start<=end){
        //     int mid= start + (end-start)/2;
        //     //left side sorted array
        //     if(nums[mid]>=nums[0])
        //         start=mid+1;
        //     // right side sorted array
        //     else{
        //     ans=nums[mid];
        //     end= mid-1;
        //  }
        //  }
        //  return ans;
        int n=arr.size();
	int low=0;
	int ans=arr[0];
	int high=n-1;
	while(low<=high){
		int mid=low +(high-low)/2;
		if(arr[mid]>=arr[low]){//left side sorted
		ans=min(ans,arr[low]);
			low=mid+1;
		}
		else {// right side is sorted
			ans=min(ans,arr[mid]);
			high=mid-1;
	
		}
	}
	return ans;
    }
};