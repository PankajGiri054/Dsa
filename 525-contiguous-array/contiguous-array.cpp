class Solution {
public:
    int findMaxLength(vector<int>& nums) {
        int n=nums.size();
       unordered_map<int,int>freq;
       freq[0]=-1;
       int sum=0;
       int ans=0;
       for(int i=0;i<n;i++){
        if(nums[i]==0){
            sum--;
        }
        else{
            sum++;
        }
        if(freq.find(sum)!=freq.end()){
ans=max(ans,i-freq[sum]);
        }
        else{
            freq[sum]=i;
        }
       }
        return ans;
    }
};