class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int n=nums.size();
         int mindiff = INT_MAX;
           int ans = 0;
        for(int i=0;i<n;i++){
            int sum=0;
            int diff=0;
            for(int j=i+1;j<n;j++){
                for(int k=j+1;k<n;k++){
sum=nums[i]+nums[j]+nums[k];
diff=abs(sum-target);
if(diff < mindiff){
    mindiff = diff;
    ans = sum;
}
                }
            }
        }
        return ans;
    }
};