class Solution {
public:
    	int longestPalindrome(string s) {
        map<char, int> mp;
        for(int i=0; i<s.size(); i++)
            mp[s[i]]++;
        
        int ans = 0, odd = 0;
        for(int i=0; i<s.size(); i++){
            if(mp[s[i]] % 2 == 0){ 
                ans += mp[s[i]];
                mp[s[i]] = 0;
            }
            else if(mp[s[i]] > 1){ 
                ans += mp[s[i]] - 1;
                mp[s[i]] = 1;
            }
            else if(mp[s[i]] == 1) odd = 1;
        }
        return ans + odd;
    }

};