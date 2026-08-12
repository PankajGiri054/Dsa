class Solution {
public:
    int maxSubarrayLength(vector<int>& nums, int k) {
        int n=nums.size();
        unordered_map<int,int>hash;
       int left=0;
       int ans=0;
       for(int j=0;j<n;j++){
        hash[nums[j]]++;
        while(hash[nums[j]]>k){
            hash[nums[left]]--;
            left++;
        }
        ans=max(ans,j-left+1);
       }
       return ans;
    }
};