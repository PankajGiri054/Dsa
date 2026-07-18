class Solution {
public:
    int findGCD(vector<int>& nums) {
        int n=nums.size();
        int largest=nums[0];
        int small=nums[0];
        for(int i=0;i<n;i++){
            if(nums[i]>largest){
                largest=nums[i];
            }
        }
         for(int i=0;i<n;i++){
            if(nums[i]<small){
                small=nums[i];
            }}
           int divisor=0;
           while(small!=0){
            int rem=small;
            small=largest%small;
            largest=rem;
            divisor=largest;
           }
            return divisor ;
    }
};