class Solution {
public:
    int areaOfMaxDiagonal(vector<vector<int>>& d) {
        int n=d.size();
        int mdgnl=0;
        int marea=0;
        for(int i=0;i<n;i++){
            int length=d[i][0];
            int width=d[i][1];
int diognal=length*length+width*width;
int area=length*width;
if(diognal>mdgnl){
    mdgnl=diognal;
    marea=area;
}
else if(diognal==mdgnl){
marea=max(marea,area);
}
        }
        return marea;
    }
};