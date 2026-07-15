class Solution {
public:
    vector<int> arrayRankTransform(vector<int>& arr) {
        int n=arr.size();
       vector<int>temp;
       for(int i=0;i<n;i++){
      temp.push_back(arr[i]);
       }
       sort(temp.begin(),temp.end());
       map<int,int>hash;
       int rank=1;
       for(int i=0;i<n;i++){
        if(hash.find(temp[i])==hash.end())
hash[temp[i]]=rank++;
       }
       for(int i=0;i<n;i++){
      arr[i]=hash[arr[i]];
       }
       return arr;
    }
};