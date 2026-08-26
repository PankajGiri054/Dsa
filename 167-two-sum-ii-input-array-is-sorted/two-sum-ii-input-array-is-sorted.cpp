class Solution {
public:
    vector<int> twoSum(vector<int>& arr, int target) {
        int n=arr.size();
        vector<int>temp;
       int i=0;
       int j=n-1;
       while(i<j){
        int sum=arr[i]+arr[j];
        if(sum==target){
            temp.push_back(i+1);
            temp.push_back(j+1);
            break;
        }
        else if(sum < target){
            i=i+1;
        }
        else{
            j--;
        }
       }
        return temp;
    }
};