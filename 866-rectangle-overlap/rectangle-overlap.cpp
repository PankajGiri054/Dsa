class Solution {
public:
    bool isRectangleOverlap(vector<int>&arr1, vector<int>&arr2) {
        if(arr1[2]<=arr2[0]||arr2[2]<=arr1[0]){
            return false;
        }
        if(arr1[3]<=arr2[1]||arr2[3]<=arr1[1]){
            return false;
        }
        return true;
    }
};