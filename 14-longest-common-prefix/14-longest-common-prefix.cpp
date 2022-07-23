//STRIVER_SDE_SHEET

class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string a=strs[0];
        for(int i=1;i<strs.size();i++){
            string b;
            for(int j=0;j<a.size();j++){
                if(a[j]==strs[i][j]) b+=a[j];
                else break;
            }
            a=b;
            if(a.size()==0) break;
        }
        return a;
        
    }
};