class Solution {
public:
static bool myFunction(int a, int b) {
        string s1 = to_string(a);
        string s2 = to_string(b);
        
        return (s1+s2) > (s2+s1);
    }
    string largestNumber(vector<int>& nums) {
        int n=nums.size();
        string result="";
        sort(nums.begin(),nums.end(),myFunction);
        if(nums[0]==0)
        return "0";
       for(int i:nums){
        result = result + to_string(i);// it converts int into string
       } 
       return result;
    }
};