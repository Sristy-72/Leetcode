class Solution {
public:
    vector<int> intersect(vector<int>& nums1, vector<int>& nums2) {
    
    
          vector<int>ans;
        //   sort(nums1.begin(),nums1.end());
           sort(begin(nums1),end(nums1));// method 2 for sorting
           sort(nums2.begin(),nums2.end());
     int n=nums1.size();
     int m=nums2.size();
     int i=0;
     int j=0;
     while(i<n && j<m){
       if(nums1[i]==nums2[j]){
        ans.push_back(nums1[i]);
        i++;
        j++;
       } 
       else if(nums1[i]<nums2[j]){
         i++;
       }
       else{
        j++;
       }
     }
     return ans;
    
    //  for(i=0;i<n;i++){
    //     for( j=0;j<m;j++){
    //         if(nums1[i]==nums2[j]){
    //            v.push_back(nums1[i]);
    //         //    nums1[i]++;
    //         i++;
    //         j++;
    //         }
    //         else if(nums1[i]>nums2[j]){
    //             j++;
    //         }
    //         else{
    //            i++;
    //         }
            
    //     }
    //  }   
   
    // return v;
    

    // method 1(hashing)
    // unordered_map<int,int>mp;
    // for(int &i:nums1){
    //     mp[i]++;
    // }
    // vector<int>ans;
    // for(int i=0;i<nums2.size();i++){
    //    int num=nums2[i];
    //    if(mp[num]>0){
    //     mp[num]--;
    //     ans.push_back(num);
    //    }
    // }
    // return ans;
    }
};