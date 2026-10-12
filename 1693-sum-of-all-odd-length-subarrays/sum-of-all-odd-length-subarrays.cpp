class Solution {
public:
    int sumOddLengthSubarrays(vector<int>& nums) {
        int n=nums.size();
        int ans=0;
        for(int i=0;i<n;i++){
            int sum=0;
            int cnt=0;
            for(int j=i;j<n;j++){
sum+=nums[j];
cnt++;
if(cnt%2==1){
    ans=ans+sum;
}
            }
        }
        return ans;
    }
};