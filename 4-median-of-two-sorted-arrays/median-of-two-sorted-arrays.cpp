class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
      int n=nums1.size();
        int m=nums2.size();
        vector<int> merged(m + n);
        int k=0;
        for(int i=0;i<n;i++){
            merged[k++]=nums1[i];
        }
        for(int i=0;i<m;i++){
            merged[k++]=nums2[i];
        }
        sort(merged.begin(),merged.end());
        int x=merged.size();
        if(x%2!=0){
            return merged[x/2];
        }
        else{
            return (merged[x/2 - 1] + merged[x/2]) / 2.0;

        }
    }
};