class Solution {
public:
    vector<int> findEvenNumbers(vector<int>&nums) {
        int n=nums.size();
        vector<int>arr;
        for(int i=0;i<n;i++){
            for(int j=0;j<n;j++){
                for(int k=0;k<n;k++){
                    if(nums[i]==0){
                        continue;
                    }
                    if(nums[k]%2!=0){
                        continue;
                    }
                    if(i==j||j==k||i==k){
                        continue;
                    }
                    int num=nums[i]*100+nums[j]*10+nums[k];
  arr.push_back(num);
                }
            }
        }
         sort(arr.begin(),arr.end());
         if(arr.empty()){
    return arr;
}
        int j=1;
        for(int i=1;i<arr.size();i++){
            if(arr[i]!=arr[j-1]){
                arr[j]=arr[i];
                j++;
            }
        }
        arr.resize(j);
        return arr;
    }
};