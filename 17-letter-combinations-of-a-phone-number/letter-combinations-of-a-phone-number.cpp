class Solution {
public:
        void solve(int index,string temp,string &digit,vector<string>&result,unordered_map<char,string>&mp){
            if(index==digit.length()){
                result.push_back(temp);
            return;
            }
         string letter=mp[digit[index]];
        for(char ch:letter){
            solve(index+1,temp+ch,digit,result,mp);
        }
        }
    vector<string> letterCombinations(string digits) {
        int n= digits.size();
    unordered_map<char, string> mp = {
    {'2',"abc"},
    {'3',"def"},
    {'4',"ghi"},
    {'5',"jkl"},
    {'6',"mno"},
    {'7',"pqrs"},
    {'8',"tuv"},
    {'9',"wxyz"}
};
        if(n==0){
            return {} ;
        }
        vector<string>result;
       solve(0, "", digits,result,mp);
        return result;
    }
};