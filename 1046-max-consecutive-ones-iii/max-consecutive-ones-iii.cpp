class Solution {
public:
    int longestOnes(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        int j=0;
        int zero=0;
       for(int i=0;i<n;i++){
        if(nums[i]==0){
zero++;
        }
        while(zero>k){
            if(nums[j]==0){
                zero--;
            }
            j++;
        }
count=max(count,i-j+1);
       }

        return count;
    }
};