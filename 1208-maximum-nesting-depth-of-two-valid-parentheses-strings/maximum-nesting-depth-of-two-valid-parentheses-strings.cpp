class Solution {
public:
    vector<int> maxDepthAfterSplit(string seq) {
        int n=seq.size();
        int dept=0;
        vector<int>ans;
        for(int i=0;i<n;i++){
            if(seq[i]=='('){
                dept++;
            ans.push_back(dept%2);
            }
            else{
        ans.push_back(dept%2);
          dept--;
            }
        }
        return ans;
    }
};