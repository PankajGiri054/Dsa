class Solution {
public:
    int findKthPositive(vector<int>& arr, int k) {
        int n=arr.size();
        vector<int>missing;
        int i=1;
        int j=0;
        while(j<n){
            if(i!=arr[j]){
                missing.push_back(i);
                i++;
            }
            else{
                i++;
                j++;
            }
        }
        while (missing.size() < k) {
    missing.push_back(i);
    i++;
}
        int value=missing[k-1];
        return value;
    }
};