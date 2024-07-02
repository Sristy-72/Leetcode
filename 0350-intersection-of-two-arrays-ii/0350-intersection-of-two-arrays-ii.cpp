class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    
    
    //       vector<int>v;
    //       sort(nums1.begin(),nums1.end());
    //        sort(nums2.begin(),nums2.end());
    //  int n=nums1.size();
    //  int m=nums2.size();
    //  for(int i=0;i<n;i++){
    //     for(int j=0;j<m;j++){
    //         if(nums1[i]==nums2[j]){
    //            v.push_back(nums1[i]);
    //         //    nums1[i]++;
    //         nums1[i]++;
    //         nums2[j]++;
    //         }
    //         if(nums1[i]>nums2[j]){
    //             nums2[j]++;
    //         }
    //         else{
    //            nums2[j]++;
    //         }
            
    //     }
    //  }   
   
    // return v;
    

    // method 1(hashing)
    unordered_map<int,int>mp;
    for(int &i:nums1){
        mp[i]++;
    }
    vector<int>ans;
    for(int i=0;i<nums2.size();i++){
       int num=nums2[i];
       if(mp[num]>0){
        mp[num]--;
        ans.push_back(num);
       }
    }
    return ans;
    }
};