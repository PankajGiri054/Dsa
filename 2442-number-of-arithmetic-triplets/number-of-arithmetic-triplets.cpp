class Solution {
public:
    int arithmeticTriplets(vector<int>& nums, int diff) {
        int n=nums.size();
        int count=0;
       for(int i=0;i<n;i++){
        bool first=false;
        bool second =false;
        for(int j=i+1;j<n;j++){
      if(nums[j]==nums[i]+diff){
        first=true;
      }
    if(nums[j]==nums[i]+2*diff){
        second=true;
    }
        }
        if(first&&second){
            count++;
        }
       }
        return count;
       
    }
};