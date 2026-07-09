class Solution {
public:
    vector<int> findMissingElements(vector<int>& arr) {
      int n=arr.size();
      int high=arr[0];
      int low=arr[0];
      vector<int>ans;
      for(int i=0;i<n;i++){
        if(arr[i]>high){
            high=arr[i];
        }
      }
        for(int i=0;i<n;i++){
        if(arr[i]<low){
            low=arr[i];
        }
      }
      sort(arr.begin(), arr.end());
      int x=low;
      for(int i=0;i<n;i++){
       while(x<arr[i]){
        ans.push_back(x);
        x++;
       }
       x++;
        }
      return ans;
    }
};