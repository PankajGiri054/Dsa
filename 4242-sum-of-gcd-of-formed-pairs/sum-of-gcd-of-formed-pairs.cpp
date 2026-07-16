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
    long long gcdSum(vector<int>& nums) {
        int n=nums.size();
        int cmax=nums[0];
        vector<int>arr;
        for(int i=0;i<n;i++){
cmax=max(cmax,nums[i]);
arr.push_back(GCD(nums[i],cmax));
        }
        sort(arr.begin(),arr.end());
        int st=0;
        long long ans=0;
        int end=n-1;
        while(st<end){
            ans=ans+GCD(arr[st],arr[end]);
            st++;
            end--;
        }
        return ans;
    }
};