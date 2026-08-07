class Solution {
public:
    vector<int> relativeSortArray(vector<int>& arr1, vector<int>& arr2) {
        int l1=arr1.size();
        int l2=arr2.size();
        unordered_map<int,int>hash;
        vector<int>temp;
        vector<int>temp1;
        for(int i=0;i<l1;i++){
            hash[arr1[i]]++;
        }
       for(int j=0;j<l2;j++){
        while(hash[arr2[j]]>0){
            temp.push_back(arr2[j]);
            hash[arr2[j]]--;
        }
       }
       for(int i=0;i<l1;i++){
        while(hash[arr1[i]]>0){
            temp1.push_back(arr1[i]);
            hash[arr1[i]]--;
        }
       }
       sort(temp1.begin(),temp1.end());
       for(int x:temp1){
        temp.push_back(x);
       }
        return temp;
    }
};