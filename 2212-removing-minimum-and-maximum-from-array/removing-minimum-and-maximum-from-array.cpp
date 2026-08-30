class Solution {
public:
    int minimumDeletions(vector<int>& nums) {
        int n=nums.size();
        if(n==1){
            return 1;
        }
        int minindex=0;
        int maxindex=0;
        for(int i=0;i<n;i++){
            if(nums[i]<nums[minindex]){
                minindex=i;
            }
        }
         for(int i=0;i<n;i++){
            if(nums[i]>nums[maxindex]){
                maxindex=i;
            }
        }
        int front=max(minindex,maxindex)+1;
        int back=n-min(minindex,maxindex);
        int mix=min(minindex,maxindex)+1+n-max(minindex,maxindex);
        int ans=min({front,back,mix});
        return ans;
    }
};