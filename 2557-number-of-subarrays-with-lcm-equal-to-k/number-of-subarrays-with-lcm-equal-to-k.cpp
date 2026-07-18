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
    int subarrayLCM(vector<int>& nums, int k) {
        int n=nums.size();
        int count=0;
        for(int i=0;i<n;i++){
            int temp=nums[i];
            if (temp == k)
             count++;
            for(int j=i+1;j<n;j++){
                temp=(temp/GCD(temp,nums[j]))*nums[j];
                if(temp==k){
                count++;
                }
                 if (temp > k || k % temp != 0)
                    break;
            }
        }
        return count;
    }
};