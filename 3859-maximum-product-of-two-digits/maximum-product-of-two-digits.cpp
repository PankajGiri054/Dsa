class Solution {
public:
    int maxProduct(int n) {
        int pro=1;
        vector<int>arr;
        while(n>0){
int r=n%10;
arr.push_back(r);
n=n/10;
        }
        int s = arr.size();
        sort(arr.begin(),arr.end());
        pro=arr[s-1]*arr[s-2];
        return pro;
    }
};