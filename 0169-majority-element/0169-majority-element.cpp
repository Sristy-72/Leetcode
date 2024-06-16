class Solution {
public:
    int majorityElement(vector<int>& arr) {
        int n=arr.size();
     int maj=arr[0];
	int cnt=0;
	for(int i=0;i<n;i++){
		if(cnt==0){
			maj=arr[i];
           cnt=1;
		}
		else if(maj==arr[i]){
			cnt++;
		}
		else
		cnt--;
	}
	// int cnt1=0;
	// for(int i=0;i<n;i++){
	// 	if(arr[i]==maj){
	// 		cnt++;
	// 	}
	// 	if(cnt1>(n/2)){
	// 		return maj;
	// 	}
	// }
	// return -1;
	return maj;   
    }
};