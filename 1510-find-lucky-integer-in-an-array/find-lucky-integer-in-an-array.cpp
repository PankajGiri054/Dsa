class Solution {
public:
    int findLucky(vector<int>& arr) {
        int n=arr.size();
        unordered_map<int,int>hash;
        for(int i=0;i<n;i++){
            hash[arr[i]]++;
        }
        int luckynum=-1;
        for(int i=0;i<n;i++){
            if(arr[i]==hash[arr[i]]){
                luckynum=max(luckynum,arr[i]);
            }
        }
        return luckynum;
    }
};