class Solution {
public:
    bool checkXMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
      //  bool check=false;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(i==j||i+j==n-1){
                    if(mat[i][j]==0)
                    return false;
                }
                 else{
                    if(mat[i][j]!=0){
                        return false;
                    }
                 }
            }
        }
        return true;
    }
};