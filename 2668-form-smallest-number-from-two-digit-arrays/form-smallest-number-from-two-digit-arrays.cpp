class Solution {
public:
    int minNumber(vector<int>& nums1, vector<int>& nums2) {
        int n1=nums1.size();
        int n2=nums2.size();
        int min1=nums1[0];
        int min2=nums2[0];
        for(int i=0;i<n1;i++){
            if(nums1[i]<min1){
                min1=nums1[i];
            }
        }
        for(int i=0;i<n2;i++){
            if(nums2[i]<min2){
                min2=nums2[i];
            }
        }
        int ans=INT_MAX;
      for(int i=0;i<n1;i++){
        for(int j=0;j<n2;j++){
            if(nums1[i]==nums2[j]){
            ans = min(ans,nums1[i]); 
            }
        }
      }
      if(ans!=INT_MAX){
      return ans;
      }
    int ans2=min(min1*10+min2,min2*10+min1);
    return ans2;
    }
};