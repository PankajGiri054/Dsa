class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int n=nums.size();
        bool flag=false;
        for(int i=0;i<n;i++){
            int maxi=nums[0];
            for(int j=0;j<=i;j++){
maxi=max(maxi,nums[j]);
            }
            int mini=nums[i];
            for(int j=i;j<n;j++){
          mini=min(mini,nums[j]);
            }
            int ans=maxi-mini;
            if(ans<=k){
             return i ;
            }
        }
        return -1;
    }
};