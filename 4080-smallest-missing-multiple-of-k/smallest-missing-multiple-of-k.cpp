class Solution {
public:
    int missingMultiple(vector<int>& nums, int k) {
        int n=nums.size();
        int num=k;
       while(true){
        bool found =false;
for(int i=0;i<n;i++){
 if(nums[i]==num){
    found=true;
    break;
 }
}
if(found==false){
    return num;
}
num=num+k;
       }
    }
};