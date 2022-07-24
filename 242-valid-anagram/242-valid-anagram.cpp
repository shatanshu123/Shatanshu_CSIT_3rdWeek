//STRIVER_SDE_SHEET

class Solution {
public:
    bool isAnagram(string s, string t) {
        //below condition is to get longest string
        if(s.size() < t.size()) return isAnagram(t,s);

        map<char,int> mp;
        for(int i=0; i<s.size(); ++i) mp[s[i]]++;
        
        for(int i=0; i<t.size(); ++i) mp[t[i]]--;
        for(auto it:mp) if(it.second > 0) return false; 
                
        return true;
    }
};