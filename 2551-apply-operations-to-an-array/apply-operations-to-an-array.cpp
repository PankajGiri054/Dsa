class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        int n=nums.size();
        vector<int>arr;
        for(int i=0;i<n-1;i++){
            if(nums[i]==nums[i+1]){
                nums[i]=nums[i]*2;
                nums[i+1]=0;
            }
        }
        for(int i=0;i<n;i++){
            if(nums[i]!=0){
                arr.push_back(nums[i]);
            }
        }
        int n2=arr.size();
        int diff=n-n2;
        for(int i=0;i<diff;i++){
            arr.push_back(0);
        }
        return arr;
    }
};