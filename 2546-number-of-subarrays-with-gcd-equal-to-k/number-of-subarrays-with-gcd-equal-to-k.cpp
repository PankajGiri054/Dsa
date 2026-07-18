class Solution {
public:
int GCD(int a,int b){
    while(b!=0){
        int rem=a%b;
        a=b;
        b=rem;
    }
    return a;
}
    int subarrayGCD(vector<int>& nums, int k) {
        int n=nums.size();
       int count=0;
        for(int i=0;i<n;i++){
            int temp=0;
            for(int j=i;j<n;j++){
       temp=GCD(temp,nums[j]);
            if(temp==k){
                count++;
            }
            }
        }
        return count;
    }
};