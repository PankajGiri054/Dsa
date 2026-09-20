class Solution {
public:
    string destCity(vector<vector<string>>& paths) {
        int n=paths.size();
        for(int i=0;i<n;i++){
            bool found=false;
            for(int j=0;j<n;j++){
                if(paths[i][1]==paths[j][0]){
                    found=true;
                    break;
                }
            }
            if(!found){
                return paths[i][1];
            }
        }
return "";
    }
};