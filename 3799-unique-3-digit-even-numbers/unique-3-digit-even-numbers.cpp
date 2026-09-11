class Solution {
public:
    int totalNumbers(vector<int>& nums) {
        int n=nums.size();
        int count=0;
        set<int>st;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
      if(nums[i]==0){
        continue;
      }
      if(nums[k]%2!=0){
        continue;
      }
      if(i==j||i==k||j==k){
        continue;
      }
      int num=nums[i]*100+nums[j]*10+nums[k];
      st.insert(num);
                }
            }
        }
        count=st.size();
        return count ;
    }
};