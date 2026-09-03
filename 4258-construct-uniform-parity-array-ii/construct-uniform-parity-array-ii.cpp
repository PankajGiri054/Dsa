class Solution {
public:
    bool uniformArray(vector<int>& nums) {
        int n=nums.size();
        sort(nums.begin(),nums.end());
        if(n==1){
            return true;
        }
      int target =nums[0]%2;
      for(int i=1;i<n;i++){
        if(nums[i]%2==target){
            continue;
        }
        int x=nums[i]-nums[0];
        if(x%2!=target){
            return false;
        }
      }
        return true;
    }
};