class Solution {
public:
    vector<vector<int>> divideArray(vector<int>& nums, int k) {
        int n=nums.size();
        vector<vector<int>>arr;
        sort(nums.begin(),nums.end());
        for(int i=0;i<n;i+=3){
            vector<int>arr1;
            if(nums[i+2]-nums[i]>k){
                return {};
            }
    arr1.push_back(nums[i]);
     arr1.push_back(nums[i+1]);
      arr1.push_back(nums[i+2]);
        arr.push_back(arr1);
        }
        return arr;
    }
};