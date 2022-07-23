class Solution {
public:
    string longestPalindrome(string s) {
        
        
        bool palindrome[s.size()]; // palindrome[j] stores whether the substring s[i+1:j] is a palindrome or not
        
        int maxLen = -1;
        int maxStart;
        
        bool prev,current;
        
        for(int i=s.size()-1;i>=0;i--)
        {
            for(int j=i; j<s.size(); j++)
            {
                int len = j-i+1;
                
                if(len<=2) current = (s[i]==s[j]);    //combines both base cases
                
                else 
                    current = ( s[i]==s[j] && palindrome[j-1]);
                 
                if(len!=1) palindrome[j-1] = prev;     
//We only store the value of current subproblem at the next iteration because the next iteration needs the original value at that position before it is overwritten
                
                if(current && len>maxLen)
                {
                    maxLen = len;
                    maxStart = i;
                }
                
                prev = current;
            }
        }
        
        return s.substr(maxStart,maxLen);
        
        
        
    }
};
