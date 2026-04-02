class Solution {
public:
bool singledigit(int digit){
	if(digit>9) return true;
	return false;
}
    bool canAliceWin(vector<int>& arr) {
    int n= arr.size();
    int one=0;
    int two=0;
	for(int i=0;i<n;i++){
		if(singledigit(arr[i])) one= one+arr[i];
		else two= two+arr[i];
	}
	if(one==two) return false;
	else return true;
	
    }
};