class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0;i<n;i++){
            nums[i]=nums[i]*nums[i];
        }
        sort(nums.begin(),nums.end());
        int l=n/2;
        long long even=0;
        long long odd=0;
        for(int i=0;i<l;i++){
            odd+=nums[i];
        }
        for(int i=l;i<n;i++){
even+=nums[i];
        }
        long long maxsum=even-odd;
        return maxsum;
    }
};