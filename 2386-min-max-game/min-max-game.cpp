class Solution {
public:
    int minMaxGame(vector<int>& nums) {
        int n= nums.size();
        while(n>1){
      vector<int>newnum;
        for(int i=0;i<n/2;i++){
    int element;
if(i%2==0){
newnum.push_back(min(nums[2 * i], nums[2 * i + 1]));
}
else{
    newnum.push_back(max(nums[2 * i], nums[2 * i + 1]));

}
        }
nums=newnum;
n=nums.size();
        }
        return nums[0];
    }
};